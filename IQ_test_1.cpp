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
    int n;cin>>n;vector<int>vec(n,0);
    int c=0,c1=0;
    fore(i,0,n-1)
    {
        int a;cin>>a;
        vec[i]=a&1;
        if(a&1)c++;
        else c1++;
    }
   bool d=(c1>c);
    fore(i,0,n-1)
    {
        if(!(vec[i]^d))
        {
            cout<<i+1;break;
        }
    }
}
main()
{
    INI solve();
}
