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
    int n;cin>>n;
    map<string  ,int>mapa;
    fore(i,1,n)
    {
        string cad;cin>>cad;
        if(mapa[cad]==0)cout<<"OK"<<endl;
        else cout<<cad<<mapa[cad]<<endl;
        mapa[cad]++ ;
    }
}
main()
{
    INI solve();
}
