#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define oset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define MT make_tuple
template<class T>using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T>using pqg=priority_queue<T>;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define forn(i,n) for(int i=0;i<int(n);i++)
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define PB push_back
#define SZ size
#define EB emplace_back
#define F first
#define S second
#define MP make_pair
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo (n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define co(c) int c=0;
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll INF=numeric_limits<ll>::max();
const dl PI=acos(-1);
const ll MOD=1e9+7;
const ll dx[4] {1,0,-1,0},dy[4] {0,1,0,-1};
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
#define DEBUG_ANTO
template<typename A,typename B>ostream& operator<<(ostream &os,const pair<A,B>&p)
{
    return os<<'('<<p.F<<','<<p.S<<')';
}
template<typename A>ostream& operator<<(ostream &os,const vector<A>&a)
{
    os<<'(';
    if(a.size()>=1)
    {
        os<<a[0];
        fore(i,1,a.size()-1)
        os<<','<<a[i];
    }
    return os<<')';
}
template<typename... V>void funcDebug(string vars,V...v)
{
    cout<<"\030[33m";
    cout<<vars<<" = ";
    string delim="";
    (...,(cout<<delim<<v,delim,','));
    cout<<"\030[33m";
}
#ifdef DEBUG_ANTO
#define deb(x...) funcDebug(#x,x);
#define LINE cout<<"\033[36m"<<"\n-----DEBUG LINE-----"<<"\033[0m"<<endl;
#endif // DEBUG_ANTO
#ifdef Antony
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif // Antony
ll randint(ll a,ll b)
{
    return uniform_int_distribution<ll>(a,b)(mt_rng);
}
int n;
vector<ll>p;
ll total=0;
ll solve(int i,ll s)
{
    if(i==n)return abs((total-s)-s);
    return min(solve(i+1,s+p[i]),solve(i+1,s));
}
main()
{
    INI
    cin>>n;
    p.resize(n);
    fore(i,0,n-1)
    {
        cin>>p[i];
        total+=p[i];
    }
    cout<<solve(0,0)<<endl;
}


