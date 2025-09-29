#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<ll>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<ll,ii>
#define reads(s) string s;cin>>s;
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    unordered_map<ll,ll>mapa;
    readi(n)
    ll s=0,may=0;
    fore(i,1,n)
    {
        readi(a);
        s+=a,may=max(may,a);
        mapa[a]++;
    }
    vi vec(may+2,0);
    for(auto e:mapa)
        vec[e.F]=e.F*e.S;
    ll t=0;
    fore(i,1,may)
    {
        if(!vec[i])continue;
        t=max(t,s-vec[i-1]-vec[i+1]);
    }
    cout<<t;
//11
//1 2 1 3 2 2 2 2 3 5 5
}
main()
{
    INI solve();
}
