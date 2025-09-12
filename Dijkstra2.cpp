#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define break_if(x) if(x)break
#define continue_if(x) if(x)continue
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
vector<ll>dijkstra(ll n,vector<vecpar>&vec)
{
    vector<ll>dist(n+1,inf);
    vector<ll>predecesores(n+1);
    priority_queue<pair<ll,ll>>cola;
    dist[1]=0;
    cola.push({0,1});
    while(!cola.empty())
    {
        ll d=-cola.top().first,u=cola.top().second;
        cola.pop();
        if(d>dist[u])continue;
        if(u==n)break;
        for(auto e:vec[u])
        {
            ll v=e.first,uv=e.second;
            if(uv+dist[u]<dist[v])
            {
                predecesores[v]=u;
                dist[v]=uv+dist[u];
                cola.push({-dist[v],v});
            }
        }
    }
    vector<ll>reconstruccion;
    if(dist[n]==inf)
        return reconstruccion;
    ll c=n;
    while(c!=0)
    {
        reconstruccion.emplace_back(c);
        c=predecesores[c];
    }
    reverse(all(reconstruccion));
    return reconstruccion;
}
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
    vector<ll>dist=dijkstra(n,vec);
    if(dist.empty())
    {
        cout<<-1<<endl;
    }
    for(ll e:dist)
        cout<<e<<" ";
//4 5
//1 2 3
//2 1 5
//4 1 4
//4 3 1
//2 3 1

}
main()
{
    INI solve();
}
