#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    INI
    int a;cin>>a;
    query
    {
        ull num,v;
        cin>>num>>v;
        ll num1=num,s=0;
        fore(i,0,int(log2(num)))
        {
            if(num1%2)
                s|=(1LL<<((i+v)%a)); // <=s+=expmod(2,((i+v)%a));
            num1>>=1;
        }
        cout<<s<<endl;
    }
}
main()
{
    solve();
}
