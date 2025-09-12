#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    map<ll,ll>mapa;
    ll n,m=0;cin>>n;
    fore(i,1,n)
    {
        ll a;cin>>a;
        mapa[a]++;
        if(mapa[a]==3)m=a;
    }
    cout<<(m==0?-1:m)<<endl;
}
main()
{
    INI query solve();
}
