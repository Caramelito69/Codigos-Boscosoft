#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void solve()
{
    readi3(a1,a2,a3)
    readi3(b1,b2,b3)
    int may=max(a1,max(a2,a3));
    int men=min(a1,min(a2,a3));
    int med=a1+a2+a3-may-men;
    int may1=max(b1,max(b2,b3));
    int men1=min(b1,min(b2,b3));
    int med1=b1+b2+b3-may1-men1;
    cout<<(may*may1)+(med*med1)+(men1*men)<<endl;
}
main()
{
    INI query solve();
}
