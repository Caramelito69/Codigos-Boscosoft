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
void solve()
{
    int n;cin>>n;
    ull s=0;
    while(n)
    {
         ull c=int((log10(n))/log10(3));
         ull d=pow(3,c);
         s+=vec[c];
         n-=d;
    }
    cout<<s<<endl;
}
main()
{
    INI query solve();
}
