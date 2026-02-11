#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0); cout.tie(0);
#define int ll
#define read1(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define read2(a,b) int a,b;cin>>a>>b;
#define read3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define read4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query read1(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<pair<int, ii>>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) read1(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<" = "<<v<<endl;
#define Sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef double long dl;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
const ll MOD=1e9+7;
void solve()
{
    read1(n)
    vi s;
    for(int i=1;i<=n;i++)
    {
        int con=0;
        for(int j=1;j<=7;j++)
            {
                read1(a)
                con+=a;
            }
            s.pb(con);
            cout<<con<<" ";
    }
}
main()
{
    INI solve();
}
