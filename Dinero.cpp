#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)return;
        vector<int>vec;
        fore(i,1,n)
        {
            int a;
            cin>>a;
            if(a<0)vec.emplace_back(i);
        }
        cout<<'['<<vec[0];
        fore(i,1,vec.size()-1)
        cout<<","<<vec[i];
        cout<<']'<<endl;
    }
}
main()
{
    INI solve();
}
