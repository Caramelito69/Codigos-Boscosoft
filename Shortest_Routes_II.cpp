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
vector<ll>dijkstra(int n,vector<vecpar>&vec,int ini)
{
    vector<ll>dist(n+1,inf);
    priority_queue<par>cola;
    dist[ini]=0;
    cola.push({0,ini});
    while(!cola.empty())
    {
        ll d=-cola.top().first;
        int u=cola.top().second;
        cola.pop();
        if(d>dist[u])continue;
        for(auto e:vec[u])
        {
            ll v=e.first,uv=e.second;
            if(dist[u]+uv<dist[v])
            {
                dist[v]=dist[u]+uv;
                cola.push({-dist[v],v});
            }
        }
    }
    return dist;
}
//Falta Optimizar :"v
void solve1()
{
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vecpar>vec(n+1);
    while(m--)
    {
        ll a,b;
        ll c;
        cin>>a>>b>>c;
        vec[a].push_back({b,c});
        vec[b].push_back({a,c});
    }
    vector<vector<ll>>vec1(n+1);
    fore(i,1,n)
    vec1[i]=(dijkstra(n,vec,i));
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        ll r=vec1[a][b];
        cout<<(r==inf?-1:r)<<endl;
    }
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>dist(n+1,vector<ll>(n+1,inf));
    fore(i,1,n)dist[i][i]=0;
    while(m--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        dist[a][b]=min(dist[a][b],c);
        dist[b][a]=min(dist[b][a],c);
    }
    fore(k,1,n)
        fore(i,1,n)
            fore(j,1,n)
                if(dist[i][k]!=inf&&dist[k][j]!=inf)
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
    fore(i,1,n)
    {
        fore(j,1,n)
        {
            cout<<(dist[i][j]==inf?-1:dist[i][j])<<" ";
        }
        cout<<endl;
    }
//    while(q--)
//    {
//        ll a,b;
//        cin>>a>>b;
//        ll r=dist[a][b];
//        cout <<(r==inf ?-1:r)<<endl;
//    }
}
main()
{
    INI solve();
}
