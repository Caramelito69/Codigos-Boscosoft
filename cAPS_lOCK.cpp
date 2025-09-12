#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;cin>>cad;
    bool ban=0;
    fore(i,1,cad.size()-1)
        if(int(cad[i])>=97)
        {
            ban=1;break;
        }
    if(ban)
        cout<<cad;
    else
    {
        for(int e:cad)
        {
            if(e>96)
                cout<<char(e-32);
            else
                cout<<char(e+32);
        }
    }
}
main()
{
    INI solve();
}
