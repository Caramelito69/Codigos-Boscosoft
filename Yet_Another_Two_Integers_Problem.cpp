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
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<ll,ii>
#define read(n) int n;cin>>n;
#define readv(vec,a) int a;cin>>a;vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<" ";
#define int ll
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void solve()
{
    int a,b;cin>>a>>b;
    cout<<int(abs(a-b)/10)+bool(int(abs(a-b)%10))<<endl;
}
main()
{
    INI query solve();
}
