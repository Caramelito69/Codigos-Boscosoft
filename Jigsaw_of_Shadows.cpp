#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(int &e:vec)cin>>e;
#define printv(vec) for(int e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const double pi=3.14159;
double radian(double d)
{
    return tan(double(d)*pi/180);
}
void solve()
{
    readi2(ang,n)
    vector<pair<double,double>>vec;
    vi vec1;
    double c=radian(ang);
    while(n--)
    {
        readi2(a,b)
        vec.pb({a,(double(b)/c)+a});
    }
    double s=0,may=-inf;
    sort(all(vec));
    for(auto e:vec)
        may=max(may,e.F),s+=max(0.,e.S-may),may=max(may,e.S);
    cout<<fixed<<setprecision(10)<<s<<endl;
/////////
//        0 100
//        50 200
//        100 300
}
main()
{
    INI solve();
}
