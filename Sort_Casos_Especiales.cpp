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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
char ma1[51][51];
void solve()
{
    int n;cin>>n;vector<int>vec(n);
    for(int &e:vec)cin>>e;
    auto itini=vec.begin();
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        if(*it==3)
        {
            sort(itini,it);
            itini=it+1;
        }
    }
    sort(itini,vec.end());
    for(int e:vec)
        cout<<e<<" ";
}
main()
{
    INI solve();
}
