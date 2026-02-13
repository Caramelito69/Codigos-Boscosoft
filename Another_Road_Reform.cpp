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
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
const int N=300005;
vi g[N],t[N];
int in[N],lo[N],tmr,br,pr;
bool v[N];
void dfs(int u,int p=-1)
{
    v[u]=1;
    in[u]=lo[u]=++tmr;
    for(int x:g[u])
    {
        if(x==p)continue;
        if(v[x])lo[u]=min(lo[u],in[x]);
        else
        {
            dfs(x,u);
            lo[u]=min(lo[u],lo[x]);
            if(lo[x]>in[u])
            {
                br++;
                t[u].push_back(x);
                t[x].push_back(u);
            }
        }
    }
}
int dfsver(int u,int p=-1)
{
    v[u]=1;
    int c=0;
    for(int x:t[u])
    {
        if(x!=p)c+=dfsver(x,u);
    }
    pr+=c/2;
    if(c%2==1)
    {
        if(p!=-1)pr++;
        return 0;
    }
    return 1;
}
void solve()
{
    readi2(n,e);
    fore(i,1,n)
    {
        g[i].clear();
        t[i].clear();
        v[i]=0,in[i]=0;
    }
    tmr=br=pr=0;
    fore(i,0,e-1)
    {
        readi2(u,w);
        g[u].push_back(w);
        g[w].push_back(u);
    }
    dfs(1);
    fore(i,1,n)v[i]=0;
    fore(i,1,n)
        if(!v[i])
            dfsver(i);
    cout<<br-pr<<endl;
}
main()
{
    INI solve();
}
