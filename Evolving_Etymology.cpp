#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll m=1e9+7;
ll expmod(ll base, ll exponente, ll modulo=m)
{
    if (modulo==1)return 0;
    base%=modulo;
    if (base<0)base+=modulo;
    ll resultado=1;
    while (exponente>0)
    {
        if (exponente&1)
            resultado=(resultado*base)%modulo;
        base=(base*base)%modulo;
        exponente>>=1;
    }
    return resultado;
}
void solve()
{
    ll n,k;cin>>n>>k;
    ll paso=expmod(2,k,n);
    string cad;cin>>cad;
    for(int i=0;i<cad.size();i++)
        cout<<cad[(i*paso)%n];
}
main()
{
    INI solve();
}
