#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin,v.end()
#define rall(v) v.rbegin,v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
        int a,b,c;cin>>a>>b>>c;
        int may=max(max(max((a+b*c),(a+b+c)),(a*(b+c))),max((a*b*c),((a+b)*c)));
        cout<<may;
}
main()
{
    INI solve();
}
