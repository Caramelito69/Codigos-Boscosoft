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
#define vii vector<ii>
#define vs vector<string>
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
int dx[]= {-1,-1,-1,0,0,1,1,1};
int dy[]= {-1,0,1,-1,1,-1,0,1};
string snuke="snuke";
void solve()
{
    readi2(h,w);
    vs g(h);
    forn(i,h)cin>>g[i];
    forn(i,h)
    {
        forn(j,w)
        {
            if(g[i][j]=='s')
            {
                forn(k,8)
                {
                    bool ok=true;
                    vii ans;
                    forn(l,5)
                    {
                        int ni=i+dx[k]*l;
                        int nj=j+dy[k]*l;
                        if(ni<0||ni>=h||nj<0||nj>=w||g[ni][nj]!=snuke[l])
                        {
                            ok=false;
                            break;
                        }
                        ans.PB({ni+1,nj+1});
                    }
                    if(ok)
                    {
                        for(auto p:ans)cout<<p.F<<" "<<p.S<<endl;
                        return;
                    }
                }
            }
        }
    }
}
main()
{
    INI solve();
}

