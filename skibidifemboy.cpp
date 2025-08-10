#include<bits/stdc++.h>
#define query int c;cin>>c;while(c--)
using namespace std;
//vector<int>vec={}
void div(int x)
{
        int e=2;
        for(int i=2;i<=x/2;i++)
            if(x%i==0)e++;
        cout<<e<<",";
}
void solve()
{
    for(int i=1;i<=1e6;i++)
    {
       div(i);
    }
}
main()
{
    solve();
    //3
    //2
    //1
    //0
}
