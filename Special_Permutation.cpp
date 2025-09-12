#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define vecpar vector<int,int>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n;cin>>n;
    if(n==4){cout<<"3 1 4 2 "<<endl;return;}
    if(n<5){cout<<-1<<endl;return;}
    if(n<=6)
    {
        for(int i=1;i<=n;i+=2)cout<<i<<' ';
        for(int i=2;i<=n;i+=2)cout<<i<<' ';
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i+=2)cout<<i<<' ';
    int c=n/2;
    if(n&1)
    {
        for(int i=1;i<=c;i++)
        {
            if(i==1)n-=3;
            else if(i==2)n+=2;
            else if(i==3)n-=4;
            else n-=2;
            cout<<n<<' ';
        }
    }
    else
    {
        n--;
        for(int i=1;i<=c;i++)
        {
            if(i==1)n-=3;
            else if(i==2)n+=4;
            else if(i==3)n-=2;
            else if(i==4)n-=4;
            else n-=2;
            cout<<n<<' ';
        }
    }
    cout<<endl;
}
main()
{
    INI query solve();
}
