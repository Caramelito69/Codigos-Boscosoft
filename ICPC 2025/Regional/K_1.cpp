#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(n,k)
    vii reyes(n);
    int menx=inf,meny=inf,mayx=-inf,mayy=-inf;
    for(auto &[x,y]:reyes)
    {
        cin>>x>>y;
        menx=min(menx,x),mayx=max(mayx,x);
        meny=min(meny,y),mayy=max(mayy,y);
    }
    int w=(mayx-menx)+1,h=(mayy-meny)+1;
    if(w>=h)
        swap(w,h);
    int area,dist,dist1;
    if(h-w<=k)
        area=(w+k)*h;
    else
        dist1=abs((h-w)-k),dist=k-dist1,w=w+dist1,area=(w*h)+(w+h+1)*(dist);
    vii pares={{k,k},{k,-k},{-k,k},{-k,-k}};
    int areamay=-inf;
    for(auto [x,y]:reyes)
    {
        for(auto [x1,y1]:pares)
        {
            int cx=x+x1,cy=y+y1;
            int dxmay=max(mayx,cx),dymay=max(mayy,cy);
            int dxmin=min(menx,cx),dymin=max(meny,cy);
            int w1=(dxmay-dxmin)+1,h1=(dymay-dymin)+1;
            areamay=max(areamay,w1*h1);
        }
    }
    cout<<max(areamay,area);
//    cout<<w<<' '<<h;
}
main()
{
    INI solve();
}
