#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<"="<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n;cin>>n;vector<bool>vec(n);
    bool ban=0;
    for(int e:vec)
    {
            cin>>e;
            if(e==1)
                ban=1;
    }
    if(ban)
        cout<<"HARD\n";
    else
        cout<<"EASY\n";
    return;
}
main()
{
    INI solve();
}
