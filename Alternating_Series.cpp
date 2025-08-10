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
    int n;cin>>n;
    if(n==2)cout<<"-1 2";
    else if(n==3)cout<<"-1 3 -1";
    else
    {
        n-=2;cout<<"-1 3 ";
        if(!(n&1))
        {
            n-=2;
            fore(i,1,n/2)cout<<"-1 3 ";
            cout<<"-1 2";
        }
        else
        {
            n-=3;
            fore(i,1,n/2)cout<<"-1 3 ";
            cout<<"-1 3 -1";
        }
    }
    cout<<endl;
}
main()
{
    INI query solve();
}
