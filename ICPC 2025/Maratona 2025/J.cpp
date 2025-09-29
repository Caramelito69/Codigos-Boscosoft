#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(a,n) vi a(n);for(int &x:a)cin>>x;
#define printv(a) for(int &x:a)cout<<x<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    set<int>seti;
    fore(i,1,10)
    {
        int a;cin>>a;
        seti.insert(a);
    }
    cout<<4-seti.size();
//        int n;cin>>n;
//        readv(vec,n)
//        printv(vec)
}
main()
{
    INI solve();
}
