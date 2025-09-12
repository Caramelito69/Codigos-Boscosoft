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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
bool arr[10001];
int lcm(int a,int b)
{
    return (a/gcd(a,b)*b);
}
void solve1()
{
    ll k,l,m,n,d;cin>>k>>l>>m>>n>>d;
    ll c=0;
    fore(i,1,d)
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            c++;
    cout<<c;
}
void solve()
{
    ll k,l,m,n,d;cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1){cout<<d;return;}
    ll c=0;
    c+=d/k,c+=d/l,c+=d/m,c+=d/n;
    c-=(d/lcm(k,l)),c-=(d/lcm(k,m)),c-=(d/lcm(k,n));
    c-=(d/lcm(l,m)),c-=(d/lcm(l,n)),c-=(d/lcm(m,n));
    ll  lcm1=lcm(lcm(k,l),m);
    if(lcm1!=0)
        c+=d/lcm1;
    lcm1=lcm(lcm(k,l),n);
    if(lcm1!=0)
        c+=d/lcm1;
    lcm1=lcm(lcm(k,m),n);
    if(lcm1!=0)
        c+=d/lcm1;
    lcm1=lcm(lcm(l,m),n);
    if(lcm1!=0)
        c+=d/lcm1;
    ll lcm2=lcm(lcm(k,l),lcm(m,n));
    if(lcm1!=0)
        c-=d/lcm2;
    cout<<c;
}
main()
{
    INI solve();
}
