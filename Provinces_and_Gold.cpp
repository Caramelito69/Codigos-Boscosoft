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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int g,s,c;cin>>g>>s>>c;
    int c1=(3*g)+(s*2)+c;
    if(c1>=8)cout<<"Province or ";
    else if(c1>=5)cout<<"Duchy or ";
    else if(c1>=2)cout<<"Estate or ";
    if(c1>=6)cout<<"Gold";
    else if(c1>=3)cout<<"Silver";
    else cout<<"Copper";
}
main()
{
    INI solve();
}
