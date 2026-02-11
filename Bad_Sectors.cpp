#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(n, k);
    reads(s);
    vector<int>dist(n,1e9);
    int last=-1e9;
    fore(i,0,n-1)
    {
        if(s[i]=='*')
            last=i;
        dist[i]=min(dist[i],i-last);
    }
    last=1e9;
    forei(i,n-1,0)
    {
        if(s[i]=='*')
            last=i;
        dist[i]=min(dist[i],last-i);
    }
    fore(i,0,n-1)
        if(dist[i]<=k)cout<<'*';
        else cout<<'.';
    cout<<endl;
}
main()
{
    INI solve();
}
