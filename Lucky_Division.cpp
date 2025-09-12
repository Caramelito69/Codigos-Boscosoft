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
vector<int>vec={4,7,44,47,74,77,444,447,477,744,774,777};
void solve()
{
    int n;cin>>n;
    for(int &e:vec)
        if(n%e==0){cout<<"YES\n";return;}
    cout<<"NO\n";
    return;
}
main()
{
    INI solve();
}
