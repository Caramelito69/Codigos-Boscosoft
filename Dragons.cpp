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
    int s,n;cin>>s>>n;
    vector<pair<int,int>>vec(n);
    for(auto &e:vec)cin>>e.first>>e.second;
    sort(all(vec));
    for(auto e:vec)
    {
        if(s>e.first)s+=e.second;
        else {cout<<"NO";return;}
    }
    cout<<"YES";return;
}
main()
{
    INI solve();
}
