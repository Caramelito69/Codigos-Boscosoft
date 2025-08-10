#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;cin>>cad;
    if(cad.size()==1){cout<<cad;return;}
    sort(all(cad));
    fore(i,cad.size()/2,cad.size()-2)
        cout<<cad[i]<<"+";
    cout<<cad[cad.size()-1]<<endl;
}
main()
{
    solve();
}
