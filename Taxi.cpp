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
    int n,c=0,dos=0;cin>>n;
    vector<queue<int>>vec(5);
    fore(i,1,n)
    {
        int a;cin>>a;
        if(a==4)c++;
        else if(a==3||a==1)
            vec[a].push(1);
        else
            dos++;
    }
    while(!vec[1].empty()&&!vec[3].empty())
        vec[1].pop(),vec[3].pop(),c++;
    int r=dos*2+vec[1].size();
    c+=int(r/4)+bool(r%4)+vec[3].size();
    cout<<c;
}
main()
{
    INI solve();
}
