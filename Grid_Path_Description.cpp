#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define forn(i,n) for(int i=0;i<int(n);i++)
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define ii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
bool vis[7][7];
string des;
int ans=0;
bool verif(int r, int c)
{
    return r>=0 && r<7 && c>=0 && c<7 && !vis[r][c];
}
void dfs(int r, int c, int step)
{
    if (r==6&& c==0)
    {
        if (step==48)
            ans++;
        return;
    }
    if (step==48) return;
    bool u=verif(r-1,c);
    bool d=verif(r+1,c);
    bool l=verif(r,c-1);
    bool rg=verif(r,c+1);
    if (!u&&!d&&l&&rg) return;
    if (!l&&!rg&&u&&d) return;
    vis[r][c]=true;
    char p=des[step];
    if (p=='?'||p=='U')
        if(u)
            dfs(r-1,c,step+1);
    if (p=='?'||p=='D')
        if(d)
            dfs(r+1,c,step+1);
    if (p=='?'||p=='L')
        if(l)
            dfs(r,c-1,step+1);
    if (p=='?'||p=='R')
        if(rg)
            dfs(r,c+1,step+1);
    vis[r][c]=false;
}
void solve()
{
    reads(s);
    des=s;
    forn(i, 7)
        forn(j,7)
            vis[i][j]=false;
    dfs(0,0,0);
    cout<<ans<<endl;
}
int main()
{
    INI solve();
}
