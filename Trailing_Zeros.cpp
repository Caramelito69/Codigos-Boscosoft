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
    ll a=0;
    for(ll i=5;n/i>=1;i*=5)a+=n/i;
    cout<<a<<endl;
}
main()
{
    INI;
    uwu();
}
