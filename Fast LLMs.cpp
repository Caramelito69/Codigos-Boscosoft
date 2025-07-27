#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod=1e9+7;
ll expmod(ll b,ll e,ll m=mod)
{
    if(m==1)return 0;
    b%=m;
    if(b<0)b+=m;
    ll r=1;
    while(e>0)
    {
        if(e&1)r=(r*b)%m;
        b=(b*b)%m,e>>=1;
    }
    return r;
}
ll invmod(ll a,ll m=mod)
{
        return expmod(a,m-2)%m;
}
void solve()
{
        int n,xi;cin>>n>>xi;
        vector<int>vec(n);
        ll s=0;
        fore(i,0,n-1)
        {
            cin>>vec[i];
            s=(s+expmod(2,vec[i]))%mod;
        }
        cout<<(expmod(2,vec[xi-1])%mod*invmod(s))%mod;
}
main()
{
    INI solve();
}
