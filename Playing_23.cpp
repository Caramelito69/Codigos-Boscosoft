#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
int vec[14];
int f(int a)
{
    return (a>=10?10:a);
}
void solve()
{
    int n;cin>>n;
    int a,b,c,d,s=0;
    cin>>a>>b>>c>>d;
    vec[a]++,vec[b]++,vec[c]++,vec[d]++;
    while(n--)
    {
        int x;cin>>x;vec[x]++;
        s+=f(x);
    }
    int r1=f(a)+f(b)+s,r2=f(c)+(d)+s;
    fore(i,1,13)
    {
        int d=f(i);
        if(vec[i]<4&&(d+r2==23||(d+r1>23&&d+r2<=23)))
         {
            cout<<i;return;
        }
    }
    cout<<-1;return;
}
main()
{
    INI solve();
}
