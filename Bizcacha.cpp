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
typedef unsigned long long ull;
using namespace std;
void solve()
{
    float d,v;cin>>d>>v;
    double r=float(d/v);
    int t=1140+(r*60);
    int h=(t/60)%24;
    if(h<10)cout<<0;
    cout<<h<<":";
    if(t%60<10)cout<<0;
    cout<<t%60;
}
main()
{
    INI solve();
}
