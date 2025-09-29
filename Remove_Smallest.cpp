#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define int ll
#define ii pair<ll,ll>
#define vi vector<ll>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define read(n) int n;cin>>n;
#define readv(vec,a) read(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readv(vec,a)
    sort(all(vec));
    fore(i,0,a-2)
        if(vec[i+1]-vec[i]>1)
        {
            cout<<"NO\n";return;
        }
    cout<<"YES\n";return;
}
main()
{
    INI query solve();
}
