#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<"="<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll n1=n/2;ll n2=n-n1;
    ll d=((n1*2)*((n1*2)+2))/4;
    cout<<ll(d-(n2*n2))<<endl;
}
main()
{
    INI solve();
}
