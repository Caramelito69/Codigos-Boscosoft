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
    int a;cin>>a;
    query
    {
        if(a%10)a--;
        else a/=10;
    }
    cout<<a;
}
main()
{
    INI solve();
}
