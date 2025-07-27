#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int m=1e9+7;
long long expmod(long long base, long long exponente, long long modulo=m) {
    if (modulo==1)return 0;
    base%=modulo;
    if (base<0)base+=modulo;
    long long resultado=1;
    while (exponente>0)
    {
        if (exponente&1)
            resultado=(resultado*base)%modulo;
        base=(base*base)%modulo;
        exponente>>=1;
    }
    return resultado;
}
int mulmod(int a,int b,int m)
{
    int r=(a*b)-(ll)((long double)a*b/m+.5)*m;
    return r<0?r+m:r;
}
int expo(int a,int b)
{
        if(!b)return 1;
        ll n=expo(a,b/2);
        n=mulmod(n,n,m);
        return (b&1?a*n:n)%m;
}
void solve()
{
    int a,b;cin>>a>>b;
    cout<<expmod(a,b)<<endl;
}
signed main()
{
    INI query solve();
}


