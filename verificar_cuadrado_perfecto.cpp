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
void solve()
{
    //Verificar si un numero es cuadrado perfecto
    int n;cin>>n;
    int l=1,r=n;
    while(l<=r)
    {
        int m=int(l+r)/2;
        if(m*m==n){cout<<"Si es";return;}
        if(m*m>=n)r=m-1;
        else l=m+1;
    }
    cout<<"No es";return;
}
main()
{
    INI solve();
}
