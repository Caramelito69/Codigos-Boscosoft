#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
//ll sigma(ll n)
//{
//    if(n==0)return 0;
//    if(n==1)return 1;
//    ll r=1,c=n;
//    if(c%2==0)
//    {
//        ll cont=0;
//        while(c%2==0)
//            c/=2,cont++;
//        r*=((1LL<<(cont+1)) -1);
//    }
//    for(ll i=3;i*i<=c;i+=2)
//    {
//        if(c%i==0)
//        {
//            ll r1=1,e=i;
//            while(c%i==0)
//                r1+=e,e*=i,c/=i;
//            r*=r1;
//        }
//    }
//    if(c>1)
//        r*=(c+1);
//    return r;
//}
//void solve1()
//{
//    int n;cin>>n;
//    vector<ll>vec(n);
//    ll lcm=1,s=0;
//    for(ll &e:vec)
//    {
//        cin>>e;
//        s+=e;
//        lcm=(e*lcm)/gcd(lcm,e);
//    }
//    ll r=sigma(lcm)-s;
//    if(r==0)cout<<'*';
//    else cout<<lcm<<" "<<r;
//}
void solve()
{
    int n;cin>>n;
    vector<ll>vec(n);
    ll lcm=1,s=0;
    for(ll &e:vec)
    {
        cin>>e;if(n==1&&e==1){cout<<'*';return;}
        lcm=(e/gcd(lcm,e))*lcm;
    }
//    vector<ll>seti(all(vec));
    ll r=int(sqrt(lcm)+.5);
    vector<ll>can;
    if(r*r==lcm)can.emplace_back(r);
    for(ll e:vec)
        can.emplace_back(lcm/e);
    for(auto e:can)
    {
        if(find(all(vec),e)==vec.end())
        {
            cout<<lcm<<" "<<e;
            return;
        }
    }
    sort(all(vec));
    lcm=vec[1]*vec[vec.size()-1];
    cout<<lcm<<" "<<lcm;
}
main()
{
    INI solve();
}
