#include<bits/stdc++.h>
using namespace std;
#define int ll
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a>>b>>c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<int,int>
#define viii vector<int,ii>
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
vector<string>rotar(int n,vector<string>& vec)
{
    vector<string>r(n,string(n,' '));
    fore(i,0,n-1)
        fore(j,0,n-1)
            r[j][n-i-1]=vec[i][j];
    return r;
//    1 2 3
//    4 5 6
//    7 8 9
//
//    7 4 1
//    8 5 2
//    9 6 3
}
void solve()
{
    readi(n)
    vector<string> s(n),t(n);
    fore(i,0,n-1)cin>>s[i];
    fore(i,0,n-1)cin>>t[i];
    vs l=s;
    int c=inf;
    fore(k,0,3)
    {
        int cont=0;
        fore(i,0,n-1)
            fore(j,0,n-1)
                if(l[i][j]!=t[i][j])
                    cont++;
        c=min(c,k+cont),l=rotar(n,l);
    }
    cout<<c;
}
main()
{
    INI solve();
}
