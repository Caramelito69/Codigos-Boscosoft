#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n;cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2||n==3||n==4)
        cout<<-1<<endl;
    else if(n==5)
    {
        cout<<"2 4 5 3 1\n";
    }
    else
    {
        int c=(n&1)?n-1:n;
        for(int i=c;i>=6;i-=2)
            cout<<i<<" ";
        cout<<"2 4 5 3 1 ";
        for(int i=7;i<=n;i+=2)
            cout<<i<<" ";
        cout<<endl;
    }
}
main()
{
    query solve();
}
