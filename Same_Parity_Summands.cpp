#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'\n'<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve1()
{
    int n,k;
    cin>>n>>k;
    //if(n&1 && !(k&1)){cout<<"NO";return;}
    if(n>=2*k &&!(n&1))
    {
        if(n%k==0)
        {
            fore(i,1,k)
            cout<<n/k<<" ";
        }
        else
        {
            int r=n/k;
            if(!((r+(n%k))&1))
            {
                fore(i,1,k-1)
                {
                    if(i&1)cout<<r+1<<" ";
                    else cout<<r-1<<" ";
                }
                cout<<r+(n%k);
            }
            else
            {
                fore(i,1,k-1)
                {
                    cout<<r<<" ";
                }
                cout<<r+(n%k);
            }
        }
    }
    else cout<<"NO";
}
void solve()
{
    int n,k;
    cin>>n>>k;
    if(n>=k&&!((n-k)&1))
    {
        cout<<"YES\n";
        fore(i,1,k-1)
            cout<<1<<" ";
        cout<<n-(k-1);
    }
    else if(n>=2*k && !(n&1))
    {
        cout<<"YES\n";
        fore(i,1,k-1)
            cout<<2<<" ";
        cout<<n-2*(k-1);
    }
    else
        cout<<"NO";
    cout<<endl;
}
main()
{
    INI query solve();
}

