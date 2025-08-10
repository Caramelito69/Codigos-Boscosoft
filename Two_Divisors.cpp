#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio();
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//void solve1()
//{
////    int n;cin>>n;
//    fore(i,1,100)
//    {
//        cout<<i<<"=> ";
//        forei(j,i/2,1)
//        {
//            if(i%j==0)
//                cout<<j<<" ";
//        }
//        cout<<endl;
//    }
//}
//void solve2()
//{
//    int a,b;while(cin>>a>>b)
//        cout<<a*b/gcd(a,b)<<endl;
//}
void solve()
{
    ll a,b;cin>>a>>b;
    if(a==1&&b==3)
        cout<<9;
    else if(b%a==0 && b/2==a)
        cout<<ll(2*b);
    else if(b%a==0)
        cout<<ll(b*(b/a));
    else
        cout<<ll(ll(a*b)/gcd(a,b));
    cout<<endl;
}
main()
{
    INI query solve();
}
