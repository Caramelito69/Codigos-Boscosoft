#include<bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin>>a;
    vector<int>vec1(a);
    int s=0;
    for(int i=0;i<a;i++)
    {
        cin>>vec1[i];
        s+=vec1[i];
    }
    cout<<s;

}
