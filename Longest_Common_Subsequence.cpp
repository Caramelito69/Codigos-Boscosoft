#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int f[1024][1024];
void solve()
{
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int &e:a)cin>>e;
    for(int &e:b)cin>>e;
    fore(i,1,n)
        fore(j,1,m)
            if(a[i-1]==b[j-1])
                f[i][j]=f[i-1][j-1]+1;
            else
                f[i][j]=max(f[i-1][j],f[i][j-1]);
    cout<<f[n][m]<<endl;
    vector<int>vec;
    while(n&&m)
    {
        if(a[n-1]==b[m-1])
        {
            vec.emplace_back(a[n-1]);
            n--,m--;
        }
        else if(f[n-1][m]<f[n][m-1])
            m--;
        else n--;
    }
    forei(i,vec.size()-1,0)cout<<vec[i]<<" ";
    cout<<endl;
}
main()
{
    INI solve();
}
