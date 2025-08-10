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
    int n,x;string s;cin>>n>>x>>s;
    if(x==1||x==n){cout<<1<<endl;return;}
    x--;
    int inf=1e9;int lf=-inf,rg=inf;
    forei(i,x-1,0)
        if(s[i]=='#')
            {lf=i;break;}
    fore(i,x+1,n-1)
        if(s[i]=='#')
            {rg=i;break;}
    if(lf==-inf&&rg==inf)
    {
        cout<<1<<endl;return;
    }
    cout<<max(min(x+1,n-rg+1),min(lf+2,n-x))<<endl;
}
main()
{
    INI query solve();
}
