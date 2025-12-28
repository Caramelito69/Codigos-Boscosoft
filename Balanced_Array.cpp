#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(a) while(a--)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define pb push_back
#define emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi(n)
    if((n/2)&1)
        {cout<<"NO\n";return;}
    cout<<"YES\n";
        for(int i=2;i<=n;i+=2)cout<<i<<' ';
        int i=1;
        for(;i<=n/2;i+=2)cout<<i<<' ';
        for(i+=2;i<=n+1;i+=2)cout<<i<<' ';
    cout<<endl;
}
main()
{
    INI solve();
}
//10
//1 2 3 4 5 6 7 8 9 10
//2 4 6 8 10=30           1 3 5 7 9=15
//
//12->14
//1 2 3 4 5 6 7 8 9 10 11 12
//2 4 6 8 10 12    1 3 5 9 11 13
//
//1 2 3 4 5 6 7 8
//2 4 6 8   1 3 7 9
