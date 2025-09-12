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
        int n;cin>>n;
        cout<<"I hate ";
        if(n!=1)
        fore(i,2,n)
        {
            cout<<"that ";
            if(i&1)cout<<"I hate ";
            else cout<<"I love ";
        }
        cout<<"it";
}
main()
{
    INI solve();
}
