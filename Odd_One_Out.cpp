#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int long long
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define reads(n) string n;cin>>n;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vs vector<string>
#define vii vector<ll,ii>
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(n) cout<<#n<<'='<<n<<endl;
#define endl '\n'
#define sum(n) ((n)*((n)+1)/2)
#define aureo ((1+sqrt(5))/2)
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    short a,b,c;cin>>a>>b>>c;
    cout<<(a^b^c)<<endl;
}
main()
{
    INI query solve();
}
