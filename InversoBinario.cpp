#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define int ll
#define endl '\n'
typedef long long ll;
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n;cin>>n;
    int e=0;
    while(n)
    {
        e=(e<<1);
        e=e^(n&1);
        n>>=1;
    }
    cout<<e;
}
main()
{
    INI solve();
}
