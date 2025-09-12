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
    int n,may=-1,men=1e7,it,it2;cin>>n;
    vector<int>vec(n);
    fore(i,0,n-1)
    {
        cin>>vec[i];
        if(may<vec[i])
            it=i+1,may=vec[i];
        if(men>=vec[i])
            it2=i+1,men=vec[i];
    }
    if(it>=it2&&it<=n)
        cout<<it-1+n-it2-1;
    else
        cout<<it-1+n-it2;
}
main()
{
    INI solve();
}
