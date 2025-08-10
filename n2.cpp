#include<bits/stdc++.h>
using namespace std;
main()
{
    int a;cin>>a;int s=0;
    int v=int(log10(a))+1;
    for(int i=1;i<=v;i++)
    {
        s+=(a%10);
        a=a/10;
    }
    cout<<s;
}
