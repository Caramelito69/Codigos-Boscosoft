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
bool ver(int x,int n,int k,vi&vec)
{
    vi d(k+1,inf);
    d[0]=0;
    for(int i:vec)
    {
        vi u(k+1,inf);
        fore(j,0,k)
        {
            if(d[j]==inf)continue;
            if(j+1<=k)
                u[j+1]=min(u[j+1],d[j]);
            if(i>=d[j]-x)
                u[j]=min(u[j],max(d[j],i));
        }
        d=u;
    }
    int m=inf;
    for(int i:d)
        m=min(m,i);
    return m!=inf;
}
void solve()
{
    readi2(n,k);
    vi vec(n);
    fore(i,0,n-1)cin>>vec[i];
    int l=0,r=2e9,a=r;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(ver(m,n,k,vec))
            a=m,r=m-1;
        else
            l=m+1;
    }
    cout<<a<<endl;
}
main()
{
    INI query solve();
}
