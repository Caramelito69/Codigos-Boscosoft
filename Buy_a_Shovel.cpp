#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int ll
#define ii pair<ll,ll>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(vec,a) vi vec(a);for(int &e:vec)cin>>e;
#define printv(vec) for(int &e:vec)cout<<e<<' ';cout<<endl;
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int k,r,c=1;cin>>k>>r;
    while((k*c)%10!=r && (k*c)%10!=0)
        c++;
    cout<<c;
}
main()
{
    INI solve();
}
