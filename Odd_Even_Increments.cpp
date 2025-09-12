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
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll n,a,s=0,s1=0;cin>>n;
    ll r=(n/2+n%2);
    fore(i,1,n)
    {
        cin>>a;
        if(i&1)
            s+=(a%2);
        else
            s1+=(a%2);
    }
    if((s==r||s==0)&&(s1==n/2||s1==0))cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
main()
{
    INI query solve();
}
