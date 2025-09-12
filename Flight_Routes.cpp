#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
vector<vector<ll>>dijkstra(int n,vector<vecpar>&vec,int k)
{
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>>cola;
    vector<vector<ll>>precios(n+1);
    cola.push({0,1});
    while(!cola.empty())
    {
        ll d=cola.top().first,u=cola.top().second;
        cola.pop();
        if(precios[u].size()>=k&&d>=precios[u].back())continue;
        auto it=lower_bound(all(precios[u]),d);
        precios[u].insert(it,d);
        if(precios[u].size()>k)
            precios[u].pop_back();
        for(auto e:vec[u])
        {
            int v=e.first;ll uv=e.second;
            if(precios[v].size()<k || d+uv<precios[v].back())
                cola.push({d+uv,v});
        }
    }
    return precios;
}
void solve()
{
    int n,m,k;cin>>n>>m>>k;
    vector<vecpar>vec(n+1);
    while(m--)
    {
        int a,b;ll c;cin>>a>>b>>c;
        vec[a].push_back({b,c});
    }
    vector<vector<ll>>dist=dijkstra(n,vec,k);
    for(auto e:dist[n])
    {
        cout<<e<<" ";
    }
}
main()
{
    INI solve();
}
