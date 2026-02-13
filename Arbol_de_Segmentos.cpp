#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define oset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define reads(a) string a;cin>>a;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define PB push_back
#define EB emplace_back
#define F first
#define S second
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
template<class T>using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T>using pqg=priority_queue<T>;
typedef long long ll;
typedef double long dl;
typedef unsigned long long ull;
const ll MOD=1e9+7;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
const ll dx[4]{1,0,-1,0},dy[4]{0,1,0,-1};
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
#define DEBUG_ADRI
template<typename A,typename B>ostream& operator<<(ostream &os,const pair<A,B>&p)
{
        return os<<'('<<p.F<<','<<p.S<<')';
}
template<typename A>ostream& operator<<(ostream &os,const vector<A>&a)
{
    os<<'{';
    if(a.size()>=1)
    {
        os<<a[0];
        fore(i,1,a.size()-1)
            os<<','<<a[i];
    }
    return os<<'}';
}
template<typename... V>
void funcDebug(string vars,V... v)
{
    cout<<"\033[33m";
    cout<<vars<<" = ";
    string  delim="";
    (...,(cout<<delim<<v,delim,','));
    cout<<"\033[33m";
}
#ifdef DEBUG_ADRI
    #define deb(x...) funcDebug(#x,x);
    #define LINE cout<<"\033[36m"<<"\n-----DEBUG LINE-----"<<"\033[0m"<<endl;
#else
    #define deb(...)
    #define LINE
#endif
ll randint(ll a,ll b)
{
    return uniform_int_distribution<ll>(a,b)(mt_rng);
}
struct ST
{
    int n;
    vector<int>arbol,lzAdd,lzSet;
    vector<bool>ban;
    ST(int sz)
    {
        n=sz;
        arbol.assign(4*n+5,0);
        lzAdd.assign(4*n+5,0);
        lzSet.assign(4*n+5,0);
        ban.assign(4*n+5,false);
    }
    void build(int nodo,int ini,int fin,vector<int>&vec)
    {
        if(ini==fin)
        {
            arbol[nodo]=vec[ini];
            return;
        }
        int mid=(ini+fin)/2;
        build(2*nodo,ini,mid,vec);//Izquierdo
        build(2*nodo+1,mid+1,fin,vec);//Derecho
        arbol[nodo]=arbol[2*nodo]+arbol[2*nodo+1];
    }
    void push(int nodo,int ini,int fin)
    {
        int mid=(ini+fin)/2;
        int izq=2*nodo;
        int der=2*nodo+1;
        if(ban[nodo])
        {
            ban[izq]=true,lzSet[izq]=lzSet[nodo],lzAdd[izq]=0;
            arbol[izq]=lzSet[nodo]*(mid-ini+1);
            ban[der]=true,lzSet[der]=lzSet[nodo],lzAdd[der]=0;
            arbol[der]=lzSet[nodo]*(fin-mid);
            ban[nodo]=false,lzSet[nodo]=0;
        }
        if(lzAdd[nodo]>0)
        {
            if(ban[izq])lzSet[izq]+=lzAdd[nodo];
            else lzAdd[izq]+=lzAdd[nodo];
            arbol[izq]+=lzAdd[nodo]*(mid-ini+1);

            if(ban[der])lzSet[der]+=lzAdd[nodo];
            else lzAdd[der]+=lzAdd[nodo];
            arbol[der]+=lzAdd[nodo]*(fin-mid);
            lzAdd[nodo]=0;
        }
    }
    void update(int nodo,int ini,int fin,int l,int r,int val,int t)
    {
        if(ini>r or fin<l)return;
        if(ini>=l and fin<=r)
        {
            if(t==2)
            {
                    ban[nodo]=true,lzSet[nodo]=val,lzAdd[nodo]=0;
                    arbol[nodo]=val*(fin-ini+1);
            }
            else
            {
                if(ban[nodo])lzSet[nodo]+=val;
                else lzAdd[nodo]+=val;
                arbol[nodo]+=val*(fin-ini+1);
            }
            return;
        }
        push(nodo,ini,fin);
        int mid=(ini+fin)/2;
        update(2*nodo,ini,mid,l,r,val,t);
        update(2*nodo+1,mid+1,fin,l,r,val,t);
        arbol[nodo]=arbol[2*nodo]+arbol[2*nodo+1];
    }
    void mostrar()
    {
        for(auto e:arbol)
            cout<<(e<10?" ":"")<<e<<' ';
        cout<<endl;
        for(int i=0;i<4*n+5;i++)
            cout<<(i<10?" ":"")<<i<<' ';
    }
    int query(int nodo,int ini,int fin,int l,int r)
    {
         if(ini>r or fin<l)return 0;
         if(ini>=l and fin<=r) return arbol[nodo];
         push(nodo,ini,fin);
         int mid=(ini+fin)/2;
         return query(2*nodo,ini,mid,l,r)+query(2*nodo+1,mid+1,fin,l,r);
    }
    void add(int l,int r,int val){update(1,0,n-1,l,r,val,1);}
    void set(int l,int r,int val){update(1,0,n-1,l,r,val,2);}
    int suma(int l,int r){return query(1,0,n-1,l,r);}
};
void solve()
{
    int n,q;
    cin>>n>>q;
    vi vec(n);
    for(auto &e:vec)cin>>e;
    ST st(n);
    st.build(1,0,n-1,vec);
    while(q--)
    {
        int t;cin>>t;
        if(t==1)
        {
            int l,r,x;cin>>l>>r>>x;
            st.add(l-1,r-1,x);
        }
        else if(t==2)
        {
             int l,r,x;cin>>l>>r>>x;
             st.set(l-1,r-1,x);
        }
        else
        {
            int l,r;cin>>l>>r;
            cout<<st.suma(l-1,r-1)<<endl;
        }
    }
}
main()
{
    solve();
}
