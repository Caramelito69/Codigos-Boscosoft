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
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
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
    fore(i,0,a-1)
    {
        if(i==0&&vec[i+1]!=vec[i] && vec[i+2]!=vec[i])
                {cout<<i+1<<endl;return;}
        if(i==a-1&&vec[i-1]!=vec[i] && vec[i-2]!=vec[i])
                {cout<<i+1<<endl;return;}
        if(i>0&&i<a&&vec[i]!=vec[i+1] && vec[i]!=vec[i-1])
                {cout<<i+1<<endl;return;}
    }
}
main()
{
    INI query solve();
}
