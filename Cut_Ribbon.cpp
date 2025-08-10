#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for (int i=1;i<=n;i++)
    {
        if (i>=a&&dp[i-a]!=-1)
            dp[i]=max(dp[i],1+dp[i-a]);
        if (i>=b&&dp[i-b]!=-1)
            dp[i]=max(dp[i],1+dp[i-b]);
        if (i>=c&&dp[i-c]!=-1)
            dp[i]=max(dp[i],1+dp[i-c]);
    }
    cout<<dp[n]<<endl;
}
main()
{
    solve();
}
