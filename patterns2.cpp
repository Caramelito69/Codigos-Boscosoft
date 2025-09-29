#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int a ;
    cin>>a;
    for (int i=a; i>=1; i--)
    {
        int b=i;
        for(int j=1; j<=a; j++)
        {
            cout<<b<<" ";
            b=b+a;
        }
        cout<<endl ;
    }
}
