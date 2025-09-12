#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll n;cin>>n;
    ll xmen=inf,xmay=-inf,ymen=inf,ymay=-inf;
    while(n--)
    {
        ll a,b;cin>>a>>b;
        xmen=min(xmen,a),xmay=max(xmay,a);
        ymen=min(ymen,b),ymay=max(ymay,b);
    }
    ull r=2*(ymay-ymen+2+xmay-xmen+2);
    cout<<r<<endl;
}
main()
{
    INI solve();
}
