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
    int n;cin>>n;
    if(n<=1399){cout<<"Division 4\n";return;}
    if(n<=1599){cout<<"Division 3\n";return;}
    if(n<=1899){cout<<"Division 2\n";return;}
    else {cout<<"Division 1\n";return;}
}
main()
{
    INI query solve();
}
