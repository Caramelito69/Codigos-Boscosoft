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
    int c;cin>>c;
    vector<pair<int,int>>vec;
    fore(i,1,c)
    {
        int a,b;cin>>a>>b;
        vec.emplace_back(make_pair(a,b));
    }
    int cont=0;
    fore(i,0,c-1)
    {
        fore(j,0,c-1)
        {
            if(i==j)continue;
            if(vec[i].second==vec[j].first)cont++;
        }
    }
    cout<<cont;
}
main()
{
    INI solve();
}
