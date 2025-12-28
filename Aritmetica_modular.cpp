#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const ll inf1=numeric_limits<int>::max();
const ll MOD=1e9+7;
ll expomod(ll base,ll expo)
{
    ll r=1;
    base%=MOD;
    while(expo)
    {
        if(expo&1)r=(r*base)%MOD;
        base=(base*base)%MOD,expo/=2;
    }
//    pow()=>2^5=2*2*2*2*2
//    expomod()=>2^5=2*2*4*2
    return r;
}
ll inv(ll a)
{
    return expomod(a,MOD-2);
}
void solve()
{
//    cout<<inf1;
    int a,b;
    cin>>a>>b;
    cout<<(a/b)%MOD<<endl;
    ll c=((a%MOD)*(inv(b)))%MOD;
    cout<<c;
//    (1 2 3 4 5 6 7 8 9 10 11 0 1 2 3 4 5 6 7 8 9 10 11 0)%12

}
main()
{
    INI solve();
}
