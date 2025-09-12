#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;cin>>cad;
    bool t=0,a=0,p=0;
    for(char e:cad)
    {
        if(e=='T')t=1;
        if(e=='A'&&t)a=1;
        if(e=='P'&&a){cout<<'S';return;}
    }
    cout<<'N';return;
}
main()
{
    INI solve();
}
