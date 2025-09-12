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
    int n;cin>>n;vector<int>vec(n);
    for(int &e:vec)cin>>e;
    int may=-1,c=1;
    fore(i,0,n-2)
        if(vec[i]>vec[i+1])
            may=max(c,may),c=1;
        else c++;
    cout<<max(c,may);
}
main()
{
    INI solve();
}
