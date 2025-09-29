#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int a;
    cin>>a;
    for (int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if (i==(a/2)+1 or j==(a/2)+1 or (j==1 and i<=(a/2+1)) or(i==a and j<=(a/2)+1) or(i==1 and j>=(a/2)+1) or (j==a and i>=(a/2)+1))
                cout<<"*" ;
            else cout<<" ";
        }
        cout<<endl ;
    }
}
