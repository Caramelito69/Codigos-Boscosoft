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
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define vvi vector<vi>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define EB emplace_back
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
template<class T>using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T>using pqg=priority_queue<T>;
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const dl PI=acos(-1);
const ll inf=numeric_limits<ll>::max();
const ll MOD=1e9+7;
const ll dx[4]{1,0,-1,0},dy[4]{0,1,0,-1};
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
#define DEBUG_ADRI
template<typename A,typename B>ostream& operator<<(ostream &os,const pair<A,B>&p){return os<<'('<<p.F<<','<<p.S<<')';}
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
    (...,(cout<<delim<<v,delim,','));
    cout<<"\033[33m";
}
#ifdef DEBUG_ADRI
    #define deb(x...) funcDebug(#x,x);
    #define LINE cout<<"\033[36m"<<"\n-----DEBUG LINE-----"<<"\033[0m"<<endl;
#endif // DEBUG_ADRI
#ifdef Adrian
    freeopen("../input.txt","r",stdin);
    freeopen("../output.txt","w",stdout);
#endif // Adrian
ll randint(ll a,ll b)
{
    return uniform_int_distribution<ll>(a,b)(mt_rng);
}
template<class T> bool chmax(T &a,T b){if(a<b){a=b;return 1;}else return 0;}
void solve()
{
    readi(n)
    int local=0;
    vii pos(n*n);
    // Logica local para testing (no afecta al juez)
    if (local) {
        fore(i, 0, n-1) fore(j, 0, n-1) {
            readi(a) pos[a-1]={i, j};
        }
    }

    auto ask=[&](int a, int b) -> int {
        cout<<"? "<<a+1<<" "<<b+1<<endl; // endl hace flush automatico
        if (local)
            return abs(pos[a].first - pos[b].first) + abs(pos[a].second - pos[b].second);
        readi(res)
        return res;
    };

    int d=0, a=0;
    // Buscar una esquina (el nodo mas lejano desde 0)
    fore(i,1,n*n-1){
        if (chmax(d, ask(0, i))) a=i;
    }

    vvi vec(n * 2 - 1);
    vec[0] = {a};

    // Agrupar nodos por distancia a la esquina encontrada
    fore(i, 0, n * n-1) if (i != a){
        vec[ask(a, i)].PB(i);
    }

    vi dist(n*n);

    // Reconstruccion
    fore(i,2,n*2-3)
    {
        for (auto x:vec[i])
            dist[x]=ask(x,vec[i-1][0]);

        sort(all(vec[i]),[&](int l, int r){
            return dist[l]<dist[r];
        });
        if (vec[i].size() > 2 && dist[vec[i][0]]==dist[vec[i][1]])
            if (ask(vec[i][1],vec[i][2])==4) swap(vec[i][0], vec[i][1]);
    }

    vector vec1(n,vi(n));
    fore(i,0,n-1)
        fore(j,0,n-1)
        {
            vec1[i][j]=vec[i+j].back();
            vec[i + j].pop_back();
        }

    cout<<"!"<<endl;
    fore(i,0,n-1)
    {
        fore(j,0,n-1)
        {
            if (j) cout<<" ";
            cout<<vec1[i][j]+1;
        }
        cout<<endl;
    }
}
main()
{
    INI solve();
}
