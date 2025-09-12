#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define int ll
#define endl '\n'
typedef long long ll;
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,m;cin>>n>>m;
    vector<string>vec(n);
    for(auto &e:vec)
        cin>>e;
    int men=1e9;
    fore(i,0,n-2)
    {
        fore(j,i+1,n-1)
        {
            int s=0;
            fore(k,0,m-1)
                s+=abs(vec[i][k]-vec[j][k]);
            men=min(s,men);
        }
    }
    cout<<men<<endl;
}
main()
{
    INI query solve();
}
