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
    vector<int>vec(n);
    for(int &e:vec)cin>>e;
    fore(i,0,n-1)
    {
        if(((vec[i]+vec[i+1])&1) && i<n-2)
        {
            if(!((vec[i+1]+vec[i+2])&1))
            {
                cout<<i+1;
                return;
            }
        }
        if(((vec[i]+vec[i+1])&1))
        {
            cout<<i+2;
            return;
        }
    }
}
main()
{
    INI solve();
}
