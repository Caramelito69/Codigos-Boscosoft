#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int m=1e9+7;
long long expmod(long long base, long long exponente, long long modulo=m)
{
    if (modulo==1)return 0;
    base%=modulo;
    if (base<0)
        base += modulo;
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
main()
{
    int a,b;cin>>a>>b;
    //Devuelve 'a' elevado a 'b' de manera mas eficiente que la funcion estandar "POW":
    cout<<expmod(a,b);
}
