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
ll incremento(int n)
{
    ll r=1;
    fore(i,0,n-1)
        r*=10;
    return r;
}
void solve()
{
        readi3(x,y,z)
        int m=max(x,y);
        if(z<m || z>m+1)
            cout<<"0 0\n";
        else if(z==m)
            cout<<incremento(x-1)<<" "<<incremento(y-1)<<endl;
        else
            cout<<incremento(x)-1<<" "<<incremento(y)-1<<endl;
}
main()
{
    INI query solve();
}
