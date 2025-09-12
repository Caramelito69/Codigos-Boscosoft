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
    int n,c;
    cin>>n>>c;
    map<string,int>mapa;
    fore(i,0,n-1)
    {
        string cad;
        cin>>cad;
        int pos=cad.find('*');
        for(char i='a';i<= 'z';i++)
        {
            string cad1=cad;
            cad1[pos]=i,mapa[cad1]++;
        }
    }
    string pal="";
    int may=-1;
    for(auto& e:mapa)
    {
        string rep=e.first;
        int com=e.second;
        if (com>may)
            may=com,pal=rep;
    }
    cout<<pal<< " " <<may<<endl;
}
main()
{
    INI solve();
}
