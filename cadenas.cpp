#include<bits/stdc++.h>
using namespace std;
string cad="abcdefghijklmnopqrstuvwxyz";
void solve()
{
    int a,b,c;cin>>a>>b>>c;
    string pal;cin>>pal;
    string cad1=cad.substr(0,a+1);
    string cad2=cad.substr(a+1,25-a);
    for(int e:pal)
    {
        int d=e-97;
        if(d<=a)
            cout<<cad1[(d+b)%cad1.size()];
        else
            cout<<cad2[(d-a-1+c)%cad2.size()];
    }
}
main()
{
    solve();
}
