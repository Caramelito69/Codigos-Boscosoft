#include<bits/stdc++.h>
using namespace std;
#define int long long
#define INI cin.tie(0)->sync_with_stdio(0);
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(b) cout<<#b<<' '<<b<<endl;
#define sum(n) ((n)*(n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
vector<vii> vec(4);
void solve()
{
        readi(a)
        fore(i,1,a)
        {
            readi(n)
            vec[n].pb({n,i});
        }
        int tam=min(vec[1].size(),min(vec[2].size(),vec[3].size()));
        cout<<tam<<endl;
       fore(i,0,tam-1)
           cout<<vec[1][i].S<<' '<<vec[2][i].S<<' '<<vec[3][i].S<<endl;
}
main()
{
    INI solve();
}
