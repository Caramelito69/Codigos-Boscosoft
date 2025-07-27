#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
using namespace std;
void solve()
{
    int n;double a,b,c,s;while(cin>>n>>a>>b>>c)
    {
        while(n--)
            a=a-(double(a*c/100))+b;
        cout<<fixed<<setprecision(2)<<a<<endl;
    }
}
main()
{
    solve();
}
