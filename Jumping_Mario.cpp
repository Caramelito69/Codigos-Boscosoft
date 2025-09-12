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
void solve()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int &e:vec)cin>>e;
    int may=0,men=0;
    fore(i,1,n-1)
    {
        if(vec[i-1]<vec[i])may++;
        if(vec[i-1]>vec[i])men++;
    }
    cout<<may<<" "<<men<<endl;
}
main()
{
    INI
    int n;cin>>n;
    fore(i,1,n)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
}
