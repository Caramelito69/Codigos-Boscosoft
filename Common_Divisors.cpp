#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int a;cin>>a;
    ll c=1;
    if(a%2==0)
    {
        ll e=0;
        while(a%2==0)
            e++,a/=2;
        c*=(e+1);
    }
    for(int i=3;i*i<=a;i+=2)
    {
        if(a%i==0)
        {
            ll e=0;
            while(a%i==0)
                e++,a/=i;
            c*=(e+1);
        }
    }
    if(a>1)c*=2;
    cout<<c<<endl;
}
main()
{
    INI query solve();
}
