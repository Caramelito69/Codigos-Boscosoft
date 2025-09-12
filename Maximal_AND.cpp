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
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>vec(n);
    for(int &e:vec)cin>>e;
    ll c=0;
    forei(i,30,0)
    {
        ll cont=0;
        fore(j,0,n-1)
            if(!((vec[j]>>i)&1))
                cont++;
        if(k>=cont)
            k-=cont,c+=(1<<i);
    }
    cout<<c<<endl;
}
main()
{
    INI query solve();
}
