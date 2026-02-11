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
#define vi vector<int>
#define vb vector<bool>
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(n,m);
    vector<string>g(n);
    forn(i,n)cin>>g[i];
    fore(i,0,n-9)
    {
        fore(j,0,m-9)
        {
            bool ok=true;
            fore(r,0,2)
            fore(c,0,2)
            if(g[i+r][j+c]!='#')
                ok=false;
            fore(r,6,8)
            fore(c,6,8)
            if(g[i+r][j+c]!='#')
                ok=false;
            fore(c,0,3)
            for(int c=0; c<4; c++)
                if(g[i+3][j+c]!='.')ok=false;
            fore(r,0,2)
            if(g[i+r][j+3]!='.')ok=false;
            fore(c,5,8)
            if(g[i+5][j+c]!='.')ok=false;
            fore(r,6,8)
            if(g[i+r][j+5]!='.')ok=false;
            if(ok)cout<<i+1<<" "<<j+1<<endl;
        }
    }
}
main()
{
    INI solve();
}



