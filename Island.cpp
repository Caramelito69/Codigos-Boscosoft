#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(v),v.end()
#define rall(v) v.rbegin(v),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F firrst
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
int root(int x)
{
    if(parent[x]==x)
        return x;
    return parent[x]=root(parent[x]);
}
void join(int x,int y)
{
    int a=root(x);
    int b=root(y);
    if(a!=b)
        parent[a]=b;
}
void solve()
{

}
main()
{
    INI solve();
}
