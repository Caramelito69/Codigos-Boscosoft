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
const ll inf=numeric_limits<ll>::max();
vector<vector<ll>>ma(505,vector<ll>(505,inf));
void solve()
{
    ll n,m,q;cin>>n>>m>>q;
    while(m--)
    {
        ll a,b;ll c;cin>>a>>b>>c;
        ma[a][b]=min(ma[a][b],c),ma[b][a]=min(ma[b][a],c);
    }
    fore(i,1,n)ma[i][i]=0;
    fore(k,1,n)
    {
        fore(i,1,n)
        {
            if(ma[i][k]==inf)continue;
             fore(j,1,n)
             {
                 if(ma[j][k]==inf)continue;
                 if(ma[i][k]+ma[j][k]<ma[i][j])
                    ma[i][j]=ma[i][k]+ma[j][k];
             }
        }
    }
    while(q--)
    {
        ll a,b;cin>>a>>b;
        cout<<(ma[a][b]==inf?-1:ma[a][b])<<endl;
    }
}
main()
{
    INI solve();
}
