#include<bits/stdc++.h>
using namespace std;
int factorial(int a)
{
    int s=1;
    for(int i=1;i<=a;i++)
        s*=i;
    return s;
}
main()
{
    int x;cin>>x;
    int s=0;
    while(x>0)
        s+=factorial(x%10),x/=10;
    cout<<s;
}
