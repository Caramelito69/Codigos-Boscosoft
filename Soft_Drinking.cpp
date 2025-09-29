#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query readi(n) while(n--)
#define int long long
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define readi(n) int n;cin>>n;
#define reads(s) string s;cin>>s;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define viii vector<ll,ii>
#define readv(vec,a) readi(a) vi vec(a); for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
void solve()
{
    readi(n) readi(k) readi(l) readi(c) readi(d) readi(p) readi(nl) readi(np)
    ll kl=k*l;
    ll cd=c*d;
    ll npn=p/np;
    ll nln=n*nl;
    cout<<min(ll(kl/nln),min(ll(cd/n),ll(npn/n)));
}
main()
{
    INI solve();
}
