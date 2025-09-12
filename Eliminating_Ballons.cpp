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
    int n;cin>>n;
    map<int,int>mapa;
    vector<int>vec(n);
    int c=0;
    for(int &e:vec)
    {
        cin>>e;
        if(mapa[e]==0)
            mapa[e-1]++,c++;
        else
            mapa[e]--,mapa[e-1]++;
    }
    cout<<c;
}
main()
{
    INI solve();
}
