#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int a;
    cin>>a;
    for (int i=a; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
          cout<<"* ";
        }
        cout<<endl ;
    }
        for (int i=2; i<=a; i++)
    {
        for(int j=1; j<=i; j++)
        {
          cout<<"* ";
        }
        cout<<endl ;
    }
}

