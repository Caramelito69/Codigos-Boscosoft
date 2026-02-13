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
int xd(int v,vi& s)
{
    auto i=lower_bound(all(s),v);
    int d=inf;
    if(i!=s.end())
        d=min(d,abs(*i-v));
    if(i!=s.begin())
        d=min(d,abs(*prev(i)-v));
    return d;
}
void solve()
{
    readi2(n,q);
    vi a(n),b(n),x(q),y(q);
    fore(i,0,n-1)cin>>a[i];
    fore(i,0,n-1)cin>>b[i];
    fore(i,0,q-1)cin>>x[i];
    fore(i,0,q-1)cin>>y[i];
    vi sa=a,sb=b;
    sort(all(sa));
    sort(all(sb));
    vi va(n),vb(n);
    fore(i,0,n-1)
        va[i]=xd(a[i],sb);
    fore(i,0,n-1)
        vb[i]=xd(b[i],sa);
    fore(i,0,q-1)
        cout<<min(va[x[i]-1],vb[y[i]-1])<<endl;
}
main()
{
    INI solve();
}
