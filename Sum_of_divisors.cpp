#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,b,e) for(int i=b;i<=e;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll m=1e9+7;
const ll inv=500000004;
ll suma(ll l, ll r)
{
    if (l>r) return 0;
    ll num=(r-l+1)%m;
    ll primero=(l%m+r%m)%m;
    return (num*primero)%m*inv%m;
}
void solve()
{
    ll n;
    cin>>n;
    ll s=0;
    for (ll d=1; d<=n;)
    {
        ll k=n/d;
        ll r=n/k;
        ll c=(k%m*suma(d,r))%m;
        s=(s+c)%m;
        d=r+1;
    }
    cout<<s<<endl;
}
main()
{
    solve();
}
