#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
char ma1[51][51];
void solve()
{
    int n,m;cin>>n>>m;
    char ma[n][m];
    fore(i,0,n-1)
    {
        fore(j,0,m-1)
        {
            cin>>ma[i][j];
            ma1[j][i]=ma[i][j];
        }
    }
    vector<string>vec(m);
     fore(i,0,m-1)
    {
        string cad1="";
        fore(j,0,n-1)
            cad1+=ma1[i][j];
        vec[i]=cad1;
    }
    fore(i,0,m-1)
    {
        auto itini=vec[i].begin();
        for(auto it=vec[i].begin();it!=vec[i].end();it++)
        {
            if(*it=='o')
            {
                sort(itini,it,greater<int>());
                itini=it+1;
            }
        }
        sort(itini,vec[i].end(),greater<int>());
    }
    fore(i,0,n-1)
    {
        fore(j,0,m-1)
            cout<<vec[j][i];
        cout<<endl;
    }
}
main()
{
    INI query solve();
}
