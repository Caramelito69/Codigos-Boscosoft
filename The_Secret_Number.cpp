#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define par pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll a;cin>>a;
    ll s=11;
    vector<ll>vec;
    while(a>=s)
    {
        if(a%s==0)
            vec.emplace_back(a/s);
        s=(s-1)*10+1;
    }
    cout<<vec.size()<<endl;
    forei(i,vec.size()-1,0)cout<<vec[i]<<' ';
    cout<<endl;
}
main()
{
    INI query solve();
}
