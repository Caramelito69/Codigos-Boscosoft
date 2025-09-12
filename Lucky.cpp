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
    string cad;cin>>cad;
    int r=(cad[0]-'0')+(cad[1]-'0')+(cad[2]-'0');
    int r2=(cad[3]-'0')+(cad[4]-'0')+(cad[5]-'0');
    cout<<(r==r2?"YES":"NO")<<endl;
}
main()
{
    INI query solve();
}
