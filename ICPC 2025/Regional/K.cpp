#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
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
    readi2(n,k)
    vii vec(n);
    int maxX=-inf,maxY=-inf,minX=inf,minY=inf;
    for(auto &[x,y]:vec)
    {
        cin>>x>>y;
        maxX=max(maxX,x),maxY=max(maxY,y);
        minX=min(minX,x),minY=min(minY,y);
    }
    if(n==1){cout<<1<<endl;return;}
    int w=maxX-minX+1;
    int h=maxY-minY+1;
    int best=-inf;
    if(w>=h)
        swap(h,w);
    if(h-w>=k)
        best=(w+k)*h;
    else
        best=((w+h+k)/2)*((w+h+k+1)/2);
    vii pares={{-k,-k},{-k,k},{k,-k},{k,k}};
     int bestOneKing=w*h;
    for(auto [x,y]:vec)
    {
        for(auto [dx,dy]:pares)
        {
            int nx=x+dx;
            int ny=y+dy;
            int wc=max(maxX,nx)-min(minX,nx)+1;
            int hc=max(maxY,ny)-min(minY,ny)+1;
            int option=wc*hc;
            bestOneKing=max(bestOneKing,option);
        }
    }
    cout<<max(bestOneKing,best)<<endl;
}
main()
{
    INI solve();
}
