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
    readi(n);
    vi a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(rall(a));
    int c=0,t=0;
    fore(i,0,n-1)
    {
        t+=b[i];
        if (t>n)break;
        int cont=a[t-1],l=i+1;
        c=max(c,cont*l);
    }
    cout<<c<<endl;
}
main()
{
    INI query solve();
}
