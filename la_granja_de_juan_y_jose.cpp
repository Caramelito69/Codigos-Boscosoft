#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b;
    while(cin>>a>>b && a!=0&&b!=0)
        if(b&1 || b/2-a<0 || a-(b/2-a)<0)
            cout<<"-1\n";
        else
            cout<<a-(b/2-a)<<" "<<b/2-a<<endl;
}
main()
{
    solve();
}
