#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n/2+1 or i==n/2+1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
