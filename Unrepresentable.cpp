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
    readi2(k,m);
    vector<vi> a;
    fore(j,0,k-1)
    {
        if((m>>j)&1)
        {
            vi v;
            fore(i,0,k-1)if(i!=j)
                v.push_back(1LL<<i);
            a.push_back(v);
        }
    }
    if(k>2 || m!=(1LL<<k)-1)
    {
        if(m!=(1LL<<k)-1)
        {
            int p=0,q=0;
            while(!((m>>p)&1))
                p++;
            while((m>>q)&1)
                q++;
            vi v;
            v.push_back((1LL<<p)+(1LL<<q));
            fore(i,0,k-1)
                if(i!=p&&i!=q)
                    v.push_back(1LL<<i);
            a.push_back(v);
        }
        else
        {
            vi v;
            v.push_back(3);
            v.push_back(5);
            fore(i,3,k-1)v.push_back(1LL<<i);
            a.push_back(v);
        }
    }
    cout<<a.size()<<endl;
    if(a.size()<=100)
    {
        for(auto& x:a)
        {
            cout<<x.size();
            for(int y:x)cout<<" "<<y;
            cout<<endl;
        }
    }
}
main()
{
    INI query solve();
}
