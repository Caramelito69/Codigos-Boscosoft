#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
vector<int>dijkstra(int n,vector<vii>&vec)
{
    vector<int>dist(n+1,inf);
    priority_queue<ii>cola;
    dist[1]=0;
    cola.push({0,1});
    while(!cola.empty())
    {
        int d=-cola.top().F;
        int u=cola.top().S;
        cola.pop();
        if(d>dist[u])continue;
        for(auto e:vec[u])
        {
            int v=e.F;
            int uv=e.S;
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
    readi2(n,k)
    vector<vii>vec(n+1);
    fore(i,1,k)
    {
        readi3(a,b,c)
        vec[a].push_back({b,c});
    }
    vector<int>dist=dijkstra(n,vec);
    for(auto e:dist)
        cout<<e<<' ';
    cout<<endl;
}
main()
{
    INI solve();
}
