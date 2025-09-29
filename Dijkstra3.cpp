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
    ll n,m;cin>>n>>m;
    vector<vecpar>vec(n+1);
    while(m--)
    {
        ll a,b,c;cin>>a>>b>>c;
        vec[a].push_back({b,c});
        vec[b].push_back({a,c});
    }
    vector<ll>dist(n+1,inf);
    dist[1]=0;
    priority_queue<par>cola;
    cola.push({0,1});
    while(!cola.empty())
    {
        ll d=-cola.top().F,u=cola.top().S;
        cola.pop();
        if(d>dist[u])continue;
        for(auto e:vec[u])
        {
            ll v=e.F,uv=e.S;
            if(d+uv<dist[v])
            {
                dist[v]=d+uv;
                cola.push({-dist[v],v});
            }
        }
    }
    fore(i,1,n)
        cout<<dist[i]<<" ";
//4 7
//1 2 3
//1 3 1
//1 4 2
//1 2 1
//2 3 5
//2 3 6
//3 4 6
}
main()
{
    INI solve();
}
