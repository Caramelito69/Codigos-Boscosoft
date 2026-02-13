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
const int M=998244353;
int po(int b,int e)
{
    int r=1;
    while(e)
    {
        if(e&1)r=r*b%M;
        b=b*b%M;
        e>>=1;
    }
    return r;
}
void solve()
{
    readi(t);
    vi n(t),l(t),r(t);
    vii q;
    fore(i,0,t-1)
    {
        cin>>n[i]>>l[i]>>r[i];
        int x=l[i]-n[i],y=r[i]-n[i]+1;
        if(x>0)q.push_back({x,2*i});
        if(y>0)q.push_back({y,2*i+1});
    }
    sort(all(q));
    vi f(2*t+5);
    int c=1,j=0,m=0;
    if(!q.empty())
        m=q.back().F;
    fore(i,1,m)
    {
        c=c*i%M;
        while(j<q.size()&&q[j].F==i)
        {
            f[q[j].S]=c;
            j++;
        }
    }
    fore(i,0,t-1)
    {
        int a=0,b=0,x=l[i]-n[i],y=r[i]-n[i]+1;
        if(x>0)
            a=f[2*i]*po(x,n[i]-x)%M;
        if(y>0)
            b=f[2*i+1]*po(y,n[i]-y)%M;
        cout<<(b-a+M)%M<<endl;
    }
}
main()
{
    INI solve();
}
