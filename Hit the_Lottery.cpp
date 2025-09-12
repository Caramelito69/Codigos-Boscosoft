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
        int n,c=0;cin>>n;
        c=n/100,n%=100,c+=n/20,n%=20,c+=n/10,n%=10,c+=n/5,n%=5,c+=n;
        cout<<c;
}
main()
{
    INI solve();
}
