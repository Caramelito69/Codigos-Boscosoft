#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a) int a,b;cin>>a>>b;
#define readi3(a) int a,b,c;cin>>a>>b>>c;
#define readi4(a) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
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
    reads(cad)
    int c=0;
    while(true)
    {
        int m=cad.find("boooo"),m2=cad.find("ha"),m3=cad.find("bravo");
        if(m<cad.size())
            c--,cad=(cad.substr(0,m))+(cad.substr(m+5,cad.size()-m-5));
        else if(m2<cad.size())
            c++,cad=(cad.substr(0,m2))+(cad.substr(m2+2,cad.size()-m2-2));
        else if(m3<cad.size())
            c+=3,cad=(cad.substr(0,m3))+(cad.substr(m3+5,cad.size()-m3-5));
        else
            break;
    }
    cout<<c;
}
main()
{
    INI solve();
}
