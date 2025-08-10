#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ll expomod(ll a,ll b)
{
    ll r=1;
    while(b>0)
    {
        if(b&1)r=r*a;
        a=(a*a),b>>=1;
    }
    return r;
}
void solve()
{
    ll a,a1,b,b1;cin>>a>>b>>a1>>b1;
    ll r=(a1*expomod(10,b)+b1)-a1;
    ll r1=expomod(10,a+b)-expomod(10,a);
    ll g=gcd(r,r1);
    cout<<r/g<<" "<<r1/g<<endl;
}
main()
{
     query solve();
}
