#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;cin>>cad;int d=0;
    for(char c:cad)if(c=='4'||c=='7')d++;
    if(d==4||d==7)cout<<"YES\n";
    else cout<<"NO\n";
}
main()
{
    INI solve();
}
