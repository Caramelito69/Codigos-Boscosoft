#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
string cad="abcdefghijklmnopqrstuvwxyz";
void solve()
{
    int a,b,c;cin>>a>>b>>c;
    string cad1=cad.substr(0,a+1);
    string cad2=cad.substr(a+1,26-a+1);
    string pal;cin>>pal;
    for(int e:pal)
    {
        if(e==32)continue;
        int d=e-97;
        if(d>a)
            cout<<cad2[(d-a-1+c)%cad2.size()];
        else
            cout<<cad1[(d+b)%cad1.size()];
    }
}
main()
{
    solve();
}
