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
    int n;
    cin>>n;
    vector<int>vec(n);
    for (int &e:vec)cin>>e;
    int i=0,f=n-1;
    ll sumin=-1,r=0;
    while (i<f)
    {
        ll s=(ll)vec[i]+vec[f];
        if (sumin==-1||abs(s)<sumin)sumin=abs(s),r=s;
        else if (abs(s)==sumin)if(s<r)r=s;
        if (s<0)i++;
        else if (s>0) f--;
        else
        {
            r=0;
            break;
        }
    }
    cout<<r<<endl;
}
int main()
{
    INI query solve();
    return 0;
}
