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
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
void solve()
{
    readi2(y,x)
    long long z=max(y,x);
    int z2=z*z,c;
    if (z%2==0)
    {
        if (y==z)
            c=z2-(x-1);
        else
            c=(z-1)*(z-1)+y;
    }
    else
    {
        if (x==z)
            c=z2-(y-1);
        else
            c=(z-1)*(z-1)+x;
    }
    cout<<c<<endl;
}
main()
{
    INI query solve();
}
