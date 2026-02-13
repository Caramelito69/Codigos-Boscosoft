#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
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
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
bool c(int m,int k,vi&v)
{
    int d=1,s=0;
    for(int x:v)
        if(s+x>m){d++;s=x;}
        else s+=x;
    return d<=k;
}
void solve()
{
    readi(t);
    while(t--){
        readi2(n,k);
        vi v(n);
        int l=0,r=0;
        fore(i,0,n-1)
        {
            cin>>v[i];
            l=max(l,v[i]);
            r+=v[i];
        }
        int z=r;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(c(m,k,v)){z=m;r=m-1;}
            else l=m+1;
        }
        cout<<z<<"\n";
    }
}
main()
{
    INI solve();
}
