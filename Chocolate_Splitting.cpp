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
void solve()
{
    readi(n);
    reads(s);
    vi vec(n+1,0);
    int c=0,c1=0;
    fore(i,0,n-1)
    {
        if(s[i]=='0')
            c++;
        else c1++;
            vec[i+1]=c-c1;
    }
    int m=-inf,a1=-inf;
    fore(i,0,n)
    {
        m=max(m,vec[i]);
        a1=max(a1,m-vec[i]);
    }
    int mn=inf,a2=-inf;
    fore(i,0,n)
    {
        mn=min(mn,vec[i]);
        a2=max(a2,vec[i]-mn);
    }
    cout<<max(c+a1,c1+a2)<<endl;
}
main()
{
    INI query solve();
}
