#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int c=0;
    query
    {
        string cad;
        cin>>cad;
        if(cad[1]=='+')
            c++;
        else
            c--;
    }
    cout<<c<<'\n';
}
main()
{
    INI solve();
}
