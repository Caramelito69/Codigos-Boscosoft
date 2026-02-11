#include<bits/stdc++.h>
using namespace std;
#define readi(a) int a;cin>>a;
#define vi vector<int>
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define print(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define query readi(n) while(n--)
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void uwu()
{
    readi(n);
    for(ll k=1; k<=n; k++)
    {
        ll t=k*k*(k*k-1)/2,a=4*(k-1)*(k-2);
        cout<<t-a<<endl;
    }
}
main()
{
    INI;
    uwu();
}
