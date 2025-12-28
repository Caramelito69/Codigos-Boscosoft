#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define oset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define MT make_tuple
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define vvi vector<vi>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
template<class T>using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T>using pqg=priority_queue<T>;
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
const ll MOD=1e9+7;
const ll dx[4] {1,0,-1,0},dy[4] {0,1,0,-1};
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
    string delim="";
    (...,(cout<<delim<<v,delim=','));
    cout<<"\033[33m";
}
#ifdef DEBUG_ADRI
#define deb(x...) funcDebug(#x,x);
#define LINE cout<<"\033[36m"<<"\n---- DEBUG LINE ----"<<"\033[0m"<<endl;
#endif // DEBUG_ADRI
#ifdef Adrian
freeopen("../input.txt","r",stdin);
freeopen("../output.txt","w",stdout);
#endif // Adrian
ll randint(ll a,ll b)
{
    return uniform_int_distribution<ll>(a,b)(mt_rng);
}
const ll maxn=4040;
ll n, a[maxn],fa[maxn];
inline ii ask(ll x, ll y)
{
    printf("? %d %d\n", x, y);
    fflush(stdout);
    cin>>x>>y;
    if (x==-1 || y==-1)
        exit(0);
    if (x>y)
        swap(x,y);
    swap(a[x],a[y]);
    return ii(x,y);
}
inline bool check(ll x,ll y)
{
    ll u=x;
    do
    {
        if (u == y)
            return 1;
    }
    while (u!=x);
    return 0;
}
ll find(ll x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
inline void merge(ll x, ll y)
{
    x=find(x);
    y=find(y);
    if (x!=y)
        fa[x]=y;
}
void solve()
{
    readi(n)
    fore(i,1,n)cin>>a[i];
    fore(i,1,n-i)
    if (check(i,n-i+1))
        ask(ll(i),ll(n-i+1));
    while (1)
    {
        fore(i,1,n)
        fa[i]=i;
        fore(i,1,n)
        merge(i, a[i]);
        ll p=0;
        fore(i,1,n)
        if (a[i]!=i && find(n-i+1)==find(n-a[i]+1))
        {
            p=i;
            break;
        }
        if (!p)
        {
            fore(i,1,n)
            if (a[i]!=i)
            {
                p=i;
                break;
            }
        }
        if (!p)
        {
            puts("!");
            fflush(stdout);
            break;
        }
        ask(p, a[p]);
    }
}
main()
{
    INI query solve();
}
