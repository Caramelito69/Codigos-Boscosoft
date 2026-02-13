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
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<int,int>
#define viii vector<int,ii>
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi(a)
    vi vec(a);
    for(auto &e:vec)cin>>e;
    int l=0,r=a-1;
    readi(bus)
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(vec[mid]==bus){cout<<"Si\n";return;}
        else if(vec[mid]<bus)l=mid+1;
        else r=mid-1;
    }
    cout<<"No\n";
}
main()
{
    INI solve();
}
