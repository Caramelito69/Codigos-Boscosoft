#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int a,b;cin>>a>>b;
    vector<int>vec(b);
    for(int &e:vec)cin>>e;
    sort(all(vec));
    int men=INT_MAX;
    fore(i,0,b-a)
        men=min(men,vec[i+a-1]-vec[i]);
    cout<<men;
}
main()
{
    INI solve();
}
