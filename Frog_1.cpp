#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(n) int n;cin>>n;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double dl;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
void solve()
{
    readv(vec,n)
    vi dp(n);
    dp[0]=0,dp[1]=abs(vec[1]-vec[0]);
    fore(i,2,n-1)
    {
        int s1=dp[i-1]+abs(vec[i]-vec[i-1]);
        int s2=dp[i-2]+abs(vec[i]-vec[i-2]);
        dp[i]=min(s1,s2);
    }
    fore(i,0,n-1)
        cout<<dp[i]<<' ';
//4
//10 30 40 20
// 0   1   2  3
//    cout<<dp[n-1]<<endl;
}
main()
{
    INI solve();
}
