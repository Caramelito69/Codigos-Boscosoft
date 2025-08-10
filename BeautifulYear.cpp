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
        int n;cin>>n;
        fore(i,n+1,10000)
        {
            int r=(i%10);
            int r1=((i/10)%10);
            int r2=((i/100)%10);
            int r3=((i/1000)%10);
            if(r!=r1&&r!=r2&&r!=r3&&r1!=r2&&r1!=r3&&r2!=r3)
            {
                cout<<i;return;
            }
        }
}
main()
{
    INI solve();
}
