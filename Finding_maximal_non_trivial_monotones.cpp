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
void solve1()
{
    int n;cin>>n;
    string cad;cin>>cad;
    int r=cad.find("aa");
    int c=0;
    while(r<cad.size())
    {
        int i;
        for(i=r;cad[i]!='b'&&i<cad.size();i++);
        cad.erase(r,i-r);
        c+=(i-r);
        r=cad.find("aa");
    }
    cout<<c;
}
void solve()
{
    int n;cin>>n;string cad;cin>>cad;
    int s=0,r=0;
    fore(i,0,cad.size()-1)
    {
        if(cad[i]=='a'&&cad[i+1]=='a')r++;
        else s+=(r>0?r+1:0),r=0;
    }
    cout<<s;
}
main()
{
    INI solve();
}
