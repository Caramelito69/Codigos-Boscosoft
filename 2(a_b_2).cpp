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
ll noelia(ll x)
{
    if(x<0)return 0;
    ll r=(ll)sqrtl(x);
    while((r+1)*(r+1)<=x)r++;
    while(r*r>x)r--;
    return r;
}
void uwu()
{
    readi(n);
    cout<<noelia(n/2)+noelia(n/4);
}
main()
{
    INI;
    uwu();
}
