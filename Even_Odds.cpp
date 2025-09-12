#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll n,k;cin>>n>>k;
    ll r=n/2+(n%2);
    if(k<=r)cout<<k*2-1;
    else
    {
        if(k%r==0){cout<<k;return;}
        cout<<k%r*2;
    }
    return;
}
main()
{
    INI solve();
}
