#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
ll rev(ll n)
{
    ll r=0;
    while(n)
        r<<=1,r^=(n&1),n>>=1;
    return r;
}
ll selve(ll n)
{
    ll tam=ll(log2(n))+1;
    ll tam1=ll(tam/2);
    n>>=tam1;
    ll r3=(n<<tam1);
    ll r2=rev((tam&1?n>>1:n));
    return (r3^r2);
}
void solve()
{
    ll n;cin>>n;
    ll e=selve(n);
    while(e>n)
    {
        e=selve(n-1);
    }
    cout<<e;
}
ll buscarpal(ll n)
{
    if (n<=0) return 0;
    ll bits=ll(log2(n))+1;
    ll med1=(bits+1)/2;
    ll med2=n>>(bits-med1);
    ll med3=med2;
    if (bits&1)
        med3>>=1;
    ll der=rev(med3);
    ll palindrome=(med2<<(bits/2))|der;
    if (palindrome>n)
    {
        med2--;
        med3=med2;
        if (bits&1)
            med3>>=1;
        der=rev(med3);
        palindrome=(med2<<(bits/2))|der;
        if ((floor(log2(med2))+1<med1)&&(n>1))
        {
            bits--;
            med1=(bits+1)/2;
            med2=(1LL<<(med1))-1;
            med3=med2;
            if (bits&1)
                med3>>=1;
            der=rev(med3);
            palindrome=(med2<<(bits/2))|der;
        }
    }
    return palindrome;
}
void solve1()
{
    ll n;cin>>n;
    cout<<buscarpal(n);
}
main()
{
    INI solve();
}
