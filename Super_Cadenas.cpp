#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define PB push_back
#define EB push_back
#define reads(a) string a;cin>>a;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define int ll
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double dl;
const ll inf=numeric_limits<ll>::max();
const int MOD = 1000000007;
const dl PI=acos(-1);
void solve()
{
    readi2(n,p)
    if (p==1) {cout<<"1\n";return;}
    vector<ll> dp(p, 0);
    dp[0] = 1;
    fore(i,2,n)
    {
        ll c=0;
        fore(j,0,p-1)
        {
            c+=dp[j];
            if (c>=MOD) c-=MOD;
        }
        forei(j,p-1,1)
            dp[j]=dp[j-1];
        dp[0]=c;
    }
    ll ans=0;
    fore(j,0,p-1)
    {
        ans+=dp[j];
        if (ans>=MOD) ans-=MOD;
    }
    cout<<ans<<"\n";
}
main()
{
    INI solve();
}
