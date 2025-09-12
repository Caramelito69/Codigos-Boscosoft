#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
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
    int cont=1;
    int n;cin>>n;
    int d;cin>>d;
    fore(i,1,n-1)
    {
        short a;cin>>a;
        if(a!=d)d=a,cont++;
    }
    cout<<cont;
}
main()
{
    INI solve();
}
