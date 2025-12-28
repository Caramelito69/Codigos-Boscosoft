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
#define PB pushs_back
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
void solve()
{
    readi(n)
    vi vec(n+2);
    fore(i,0,n-1)cin>>vec[i];
    vi dp(n,0);
    dp[0]=0,dp[1]=abs(vec[0]-vec[1]);
    fore(i,2,n-1)
        dp[i]=min(dp[i-1]+abs(vec[i]-vec[i-1]),dp[i-2]+abs(vec[i]-vec[i-2]));
    cout<<dp[n-1];
}
main()
{
    INI solve();
}
