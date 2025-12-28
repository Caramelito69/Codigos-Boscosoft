#include<bits/stdc++.h>
using namespace std;
main()
{
    string n;cin>>n;
    for(int i=0;i<=n.size()-1;i++)
    {
        if(i%2==0)
        {
            cout<<char(toupper(n[i]));
        }
        else
            cout<<char(tolower(n[i]));

    }

}
