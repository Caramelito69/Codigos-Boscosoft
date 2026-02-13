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
vi baba(int s,int n,vector<vi>&vec)
{
    vi d(n+1,-1);
    queue<int>cola;
    cola.push(s);
    d[s]=0;
    while(!cola.empty())
    {
        int u=cola.front();
        cola.pop();
        for(int v:vec[u])
        {
            if(d[v]==-1)
            {
                d[v]=d[u]+1;
                cola.push(v);
            }
        }
    }
    return d;
}
void solve()
{
    readi2(n,m);
    vi u(m),v(m);
    fore(i,0,m-1)cin>>u[i];
    fore(i,0,m-1)cin>>v[i];
    vector<vi>vec(n+1),r(n+1);
    fore(i,0,m-1)
    {
        vec[u[i]].push_back(v[i]);
        r[v[i]].push_back(u[i]);
    }
    reads(s);
    readi(x);
    if(s[x-1]=='1'){cout<<0<<endl;return;}
    vi d=baba(x,n,vec);
    vi e=baba(x,n,r);
    int a=inf;
    fore(i,1,n)
        if(s[i-1]=='1' && d[i]!=-1 && e[i]!=-1)
            a=min(a,d[i]+e[i]);
    if(a==inf)
        cout<<-1<<endl;
    else
        cout<<a<<endl;
}
main()
{
    INI solve();
}
