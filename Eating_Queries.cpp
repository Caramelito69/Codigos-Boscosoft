#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define int ll
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll a,q;cin>>a>>q;vector<ll>vec(a),sum(a,0);
    for(int &e:vec)cin>>e;
    sort(rall(vec));
    sum[0]=vec[0];
    fore(i,1,a-1)
        sum[i]=sum[i-1]+vec[i];
    while(q--)
    {
        int b;cin>>b;
        int l=-1,r=a;
        while(r-l>1)
        {
            int med=(r+l)/2;
            if(sum[med]>=b)r=med;
            else l=med;
        }
        if(r<a&&sum[r]>=b)
            cout<<r+1;
        else cout<<-1;
        cout<<endl;
    }
}
main()
{
    INI query solve();
}
