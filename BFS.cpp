#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(vec) begin(vec),end(vec)
#define rall(vec) rbegin(vec),rend(vec)
#define F first
#define S second
#define pb push_back
#define emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ad(n);
    for (int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    vector<vector<bool>>patitouwu(n,vector<bool>(n,false));
    for (int i=0;i<n;i++) {
        queue<int>q;
        vector<int>d(n,-1);
        d[i]=0;
        q.push(i);
        while (!q.empty())
        {
            int u=q.front();
            q.pop();
            if (d[u]<=2) {
                patitouwu[i][u]=true;
            }
            if (d[u]<2) {
                for (int v:ad[u]) {
                    if (d[v]==-1) {
                        d[v]=d[u]+1;
                        q.push(v);
                    }
                }
            }
        }
    }
    int ed=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (patitouwu[i][j]) {
                ed++;
            }
        }
    }
    cout<<ed<<endl;
}
main()
{
    INI solve();
}
