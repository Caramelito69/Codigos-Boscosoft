#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
vector<ull>vec={3,10,33,108,351,1134,3645,11664,37179,118098,373977,1180980,3720087,11691702,36669429,114791256,358722675,1119214746,3486784401,10847773692,33705582543,104603532030,324270949293,1004193907488,3106724901291,9602604240354,29655101330505,91507169819844,282147106944519,869318113288518,2676584717230437,8235645283785960,25324609247641828,77826847931777312,239039604361887488,733795994785329024,2251419529454986752,6904353223661960192};
void solve1()
{
    int n,k;
    cin>>n>>k;
    if(k>=n)k=n;
    ll c=pow(3,ll(log10(n)/log10(3)));
    ll r1=ll(n/c),r2=(n%c);
    ll rs=r1+r2;
    if(k>=rs)
    {
        ll d=n-c;
        if(k-d==0||k==rs)
        {
            ll c1=ll(log10(c)/log10(3));
            cout<<vec[c1]*r1+3*r2<<endl;
        }
        else
        {
            ll c1=d*3;
            n-=d,k-=d;
            k-=(n%k);
            ll c2=ll(log10((n/k))/log10(3));
            cout<<vec[c2]*k+c1<<endl;
        }
    }
    else
        cout<<-1<<endl;
}
void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<ll>vec(60,0);
    ll t=n,r1=0,r2=0;
    for (int i=0;i<60&&t>0;i++)
    {
        vec[i]=t%3;
        r1+=vec[i];
        ll c=pow(3,i);
        if (i==0)
            r2+=vec[i]*3;
        else
            r2+=vec[i]*(3*c+(ll)i*(c/3));
        t /= 3;
    }
    if (r1>k){cout<<-1<<endl;return;}
    ll e=k-r1;
    for (int i=59;i>=1;i--)
    {
        ll c1=min(vec[i],e/2);
        if (c1>0)
        {
            ll c2=pow(3,i-1);
            r2-=c1*c2;
            e-=c1*2;
            vec[i-1]+=c1*3;
        }
    }
    cout<<r2<<endl;
}
main()
{
    INI  solve();
}
