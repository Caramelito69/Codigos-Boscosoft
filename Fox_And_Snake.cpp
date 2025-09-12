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
    int n,m;cin>>n>>m;bool ban=0;
    vector<vector<char>>vec(n,vector<char>(m,'.'));
    fore(i,0,n-1)
    {
        if(i&1&&!ban)vec[i][m-1]='#',ban=1;
        else if(i&1&&ban)vec[i][0]='#',ban=0;
        else
            fore(j,0,m-1)
                vec[i][j]='#';
    }
    fore(i,0,n-1)
    {
        fore(j,0,m-1)
            cout<<vec[i][j];
        cout<<endl;
    }
}
main()
{
    INI solve();
}
