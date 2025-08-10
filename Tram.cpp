#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<"="<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int c;cin>>c;
    int i1,f1;cin>>i1>>f1;int d=f1+i1;
    int may=max(may,d);
    fore(i,1,c-2)
    {
        int a,b;cin>>a>>b;
        d=d-a+b,may=max(may,d);
    }
    int i2,f2;cin>>i2>>f2;
    d-=i2;
    cout<<max(may,d);
}
main()
{
    INI solve();
}
