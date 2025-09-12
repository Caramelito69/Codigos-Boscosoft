#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        int c=int(log2(n));
        int cont=0;
        while(n)
        {
            int r=n%2;
            if(r==1)
                cont+=pow(2,c);
            c--;
            n=n/2;
        }
        cout<<cont<<endl;
    }
}
main()
{
    INI solve();
}
