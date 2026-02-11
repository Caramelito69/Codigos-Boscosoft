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
#define dbg(v) cout<<#v<<'='<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
void solve()
{
    readi(a)
    int p1=a/30,p2=a/15,p3=a/10,p4=a/6;
    p2-=p1,p3-=p1,p4-=p1;
    int c1=a/5,c2=a/3,c3=a/2;
    int aux1=(c3-p1-p3-p4);
    int aux2=(c2-p1-p2);
    int m2=2*aux1;
    int m3=3*aux2;
    int m5=5*c1;
    cout<<m2+m3+m5+a-(c1+aux1+aux2)<<endl;
}
main()
{
    INI query solve();
}
