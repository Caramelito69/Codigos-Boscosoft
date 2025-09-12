#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool prim[101];
void primos()
{
    fore(i,0,100)prim[i]=1;
    prim[2]=1;
    fore(i,1,100)
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                prim[i]=0;
                break;
            }
}
void solve()
{
        int h1_1,m1_1,h2_1,m2_1;
        cin>>h1_1>>m1_1>>h2_1>>m2_1;
        int h1,m1,h2,m2;
        if(h1_1==h2_1)
            h1=min(h1_1,h2_1),h2=max(h1_1,h2_1),m1=min(m1_1,m2_1),m2=max(m1_1,m2_1);
        else
            h1=h1_1,m1=m1_1,h2=h2_1,m2=m2_1;
        int c=0;
        while(true)
        {
            if(prim[h1+m1])c++;
            if(h1==h2&&m1==m2)break;
            if(m1<60)m1++;
            else if(m1==60)h1++,m1%=60;
            if(h1==24)h1%=24;
        }
        cout<<c<<endl;
}
main()
{
    INI primos(); query solve();
}
