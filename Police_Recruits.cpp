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
    int n;cin>>n;vector<int>vec(n);
    int s=0,c=0;
    for(int &e:vec)
    {
        cin>>e;
        if(s==0&&e==-1)c++;
        else if(e!=-1)s+=e;
        else s--;
    }
    cout<<c;
}
main()
{
    INI solve();
}
