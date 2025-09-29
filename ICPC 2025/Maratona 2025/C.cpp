#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(a,n) vi a(n);for(int &x:a)cin>>x;
#define printv(a) for(int &x:a)cout<<x<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll n;cin>>n;
    ll r=0;
    forei(i,n,0)
    {
        ll a;cin>>a;
        r+=(a?(1<<i):0);
    }
    ll contador=0;
    while(r!=1)
        r=(r&1?(r<<1)^r^1:r>>1),contador++;
    cout<<contador;
}
main()
{
    INI solve();
}
