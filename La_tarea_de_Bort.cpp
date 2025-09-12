#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(ull i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll n;cin>>n;
    ull r=-1+sqrt(1-(4*ll(-2*n)));
    double r1=-1+sqrt(1-(4*ll(-2*n)));
    if(r%2==0 &&ceil(r1)-r==0)
        cout<<"SI\n";
    else
        cout<<"NO\n";
}
main()
{
    query solve();
}
