#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    ll r1=(1LL<<n),r2x=(1LL<<n-1);
    ll r2y=r2x;
   // if(r2x==x&&r2y==y){cout<<0;return;}
    ll c=0;
    x=(x>r2x?x-r2x:x),y=(y>r2y?y-r2y:y);
    while(true)
    {
        if(r2x==x&&r2y==y)
        {
            cout<<c;return;
        }
        r2x>>=1,r2y>>=1;
        x=(x>r2x?x-r2x:x),y=(y>r2y?y-r2y:y);
        c++;
    }
}
main()
{
    INI solve();
}
