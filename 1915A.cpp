#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int n ;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b)
        {
            cout<< c;
        }
        else if (c==a )
        {
            cout<<b ;
        }
        else
            cout<<a ;
        cout<<endl ;
    }
}
