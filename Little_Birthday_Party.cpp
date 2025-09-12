#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'\n'<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
const ll mod=1e9+7;
ll fact[366];
ll invf[366];
ll expomod(ll b,ll e)
{
    ll r=1;
    while(e)
    {
        if(e&1)
            r=(r*b)%mod;
        b=(b*b)%mod,e>>=1;
    }
    return r%mod;
}
void selve()
{
    fact[0]=1;
    fore(i,1,365)
        fact[i]=fact[i-1]*i%mod;
    fore(i,0,365)
        invf[i]=expomod(fact[i],mod-2);
}

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll k=n-x;
    if (k>364)
    {
        cout<<0<<endl;
        return;
    }
    ll r=n%mod;
    ll c;
    if (k>r)c=0;
    else
    {
        c=1;
        fore(i,0,k-1)c=c*(r-i)%mod;
        c=c*invf[k]%mod;
    }
    ll p=fact[364]*invf[364-k]%mod;
    ll n1=365*c%mod;
    n1=n1*p%mod;
    ll t=expomod(365,n);
    cout << n1*expomod(t, mod-2)%mod<<endl;
}
main()
{
    INI
    selve();
    query solve();
}
