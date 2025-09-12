#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vecpar vector<pair<int,ll>>
#define par pair<ll,int>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
vector<ll>dijkstra(int n,vector<vecpar>&vec)
{
    vector<ll>dist(n+1,inf);
    priority_queue<par>cola;
    dist[1]=0;
    cola.push({0,1});
    while(!cola.empty())
    {
        ll d=-cola.top().first;
        int u=cola.top().second;
        cola.pop();
        if(d>dist[u])continue;
        for(auto e:vec[u])
        {
            int v=e.first;
            ll uv=e.second;
            if(dist[u]+uv<dist[v])
            {
                dist[v]=dist[u]+uv;
                cola.push({-dist[v],v});
            }
        }
    }
    return dist;
}
void solve()
{
    int n,m;cin>>n>>m;
    vector<vecpar>vec(n+1);
    while(m--)
    {
        int a,b;ll c;cin>>a>>b>>c;
        vec[a].push_back({b,c});
    }
    vector<ll>dist=dijkstra(n,vec);
    fore(i,1,n)
        cout<<dist[i]<<" ";
}
main()
{
    INI solve();
}
