#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(a,n) vi a(n);for(int &x:a)cin>>x;
#define printv(a) for(int &x:a)cout<<x<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<set<ll>>adj(n);
    fore(i,0,m-1)
    {
        ll u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    if (m == n * (n - 1) / 2)
    {
        fore(i,1,n-1)
            cout << 1 << " " << i + 1 << endl;
        return;
    }

    ll root = 0;
    fore(i,0,n-1)
        if (adj[i].size() > adj[root].size())
            root = i;
    vector<ll> parent(n, -1);
    vector<bool> inTree(n, false);
    vector<vector<ll>> treeNeighbors(n);

    inTree[root] = true;
    queue<ll> q;
    q.push(root);

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (ll v : adj[u])
        {
            if (inTree[v]) continue;
            bool ok = true;
            for (ll w : treeNeighbors[u])
            {
                if (adj[v].find(w) == adj[v].end())
                {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                parent[v] = u;
                inTree[v] = true;
                treeNeighbors[u].push_back(v);
                treeNeighbors[v].push_back(u);
                q.push(v);
            }
        }
    }
    ll edgeCount = 0;
    fore(i,0,n-1)
        if (parent[i] != -1)
            edgeCount++;
    if (edgeCount != n - 1)
        cout << '*' << endl;
    else
    {
        fore(i,0,n-1)
            if (parent[i] != -1)
                cout << i + 1 << " " << parent[i] + 1 << endl;
    }
}
main()
{
    INI solve();
}
