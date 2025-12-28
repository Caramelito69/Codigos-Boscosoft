#include <bits/stdc++.h>
#define int ll
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a; i<=b; i++)
#define forei(i,a,b) for(int i=a; i>=b; i--)
#define read(a) int a;cin>>a;
#define endl '\n'
typedef long long ll;
using namespace std;
void solve()
{
        ll  a,b=0,c;
        cin>>a;
        while(a!=0)
            c=a%10,b+=c,a/=10;
        cout<<b<<endl;
}
main()
{
    INI
    query
    solve();
}
