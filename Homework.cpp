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
    int n,m;string a,c,c1;cin>>n>>a>>m>>c>>c1;
    deque<char>cola;
    for(auto e:a)cola.push_back(e);
    fore(i,0,m-1)
    {
        if(c1[i]=='D')
            cola.push_back(c[i]);
        else
            cola.push_front(c[i]);
    }
    for(auto e:cola)
        cout<<e;
    cout<<endl;
}
main()
{
    INI query solve();
}
