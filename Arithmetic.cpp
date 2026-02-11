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
    readi3(a,b,c)
    int may=max(a,max(b,c));
    int men=min(a,min(b,c));
    if(!men && !(a+b+c-may-men))
    {
        cout<<"Yes\n"<<men<<' '<<may<<' '<<(a+b+c-may-men)<<endl;return;
    }
    if((a*b*c/may)==may)
    {
        cout<<"Yes\n";
        int men1=min(a,min(b,c));
        cout<<men1<<' '<<a+b+c-may-men1<<' '<<may<<endl;
        return;
    }
    cout<<"No\n";
}
main()
{
    INI query solve();
}
