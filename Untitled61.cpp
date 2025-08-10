#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;int e=0,clon=n;
    while(n>0)
    {
        int r=n%10;
        e=(e*10)+r;
        n=n/10;
    }
    if(e==clon)
    {
        cout<<"Y";
    }
    else
    {
        cout<<"N";
    }
}
