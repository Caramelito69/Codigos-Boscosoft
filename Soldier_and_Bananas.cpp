#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll k,n,m;cin>>k>>n>>m;
    ll r=(k*(m*(m+1)/2));
    cout<<(r>n?r-n:0)<<endl;
}
main()
{
    solve();
}
