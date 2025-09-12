#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,m;cin>>n>>m;
    vector<ll>vec(n+1,0);
    while(m--)
    {
        ll a,b,c=0;cin>>a>>b;
        vector<int>pos(n+1);
        fore(i,1,n)
            {
                cin>>pos[i];
                if(pos[i]==1)c++;
                else vec[i]+=b;
            }
        ll d=ll(a/(c+1));
        if(d<b)
            vec[0]+=b,d=ll(!c?0:a/c);
        else vec[0]+=d;
        fore(i,1,n)
            if(pos[i]==1)
                vec[i]+=d;
    }
    fore(i,1,n)
        cout<<vec[i]<<" ";
    cout<<vec[0];
}
main()
{
    INI solve();
}
