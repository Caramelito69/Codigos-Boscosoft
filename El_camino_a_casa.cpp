#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vecpar vector<pair<int,ll>>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int inf=1e9;
vector<ll>dijkstra(int n,vector<vecpar>&vec,int ini=1)
{
    vector<ll>dist(n+1,inf);
    priority_queue<pair<ll,int>>cola;
    dist[ini]=0;
    cola.push({0,ini});
    while(!cola.empty())
    {
        int d=-cola.top().first;
        int u=cola.top().second;
        cola.pop();
        if(d>dist[u])continue;
        for(auto &e:vec[u])
        {
            int v=e.first,uv=e.second;
            if(uv+dist[u]<dist[v])
            {
                dist[v]=uv+dist[u];
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
    fore(i,1,m)
    {
        int a,b,c;cin>>a>>b>>c;
        vec[a].push_back({b,c});
    }
    vector<ll>dist=dijkstra(n,vec);
    fore(i,1,n)
    {
        cout<<dist[i]<<" ";
    }
}
main()
{
    INI solve();
}
