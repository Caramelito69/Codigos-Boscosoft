#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double n1,n2,c1,c2;
    while(cin>>n1>>n2>>c1>>c2 && n1!=0&&n2!=0&&c1!=0&&c2!=0)
        if(double(n1/n2)==double(c1/c2))
            cout<<"=\n";
        else
            cout<<"!=\n";
}
main()
{
    solve();
}

