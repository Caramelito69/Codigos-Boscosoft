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
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
int arr[]={5,15,30,50,75,105,140,180,225,275,330};
void solve()
{
    int n,k;cin>>n>>k;
    int r=240-k;
    fore(i,0,n)
        if(r<arr[i]||i==n){cout<<i;return;}
}
main()
{
    INI solve();
}
