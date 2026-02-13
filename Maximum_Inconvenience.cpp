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
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(x,y);
    vi vec(1005,0);
    vec[0]=1;
    fore(i,0,1000)
    {
        if(vec[i])
        {
            if(i+x<=1000)
                vec[i+x]=1;
            if(i+y<=1000)
                vec[i+y]=1;
        }
    }
    int a=0,m=-1,l=0;
    fore(i,1,1000)
    {
        if(vec[i])
        {
            if(i-l-1>m)
                m=i-l-1,a=i-1;
            l=i;
        }
    }
    cout<<a<<endl;
}
main()
{
    INI query solve();
}
