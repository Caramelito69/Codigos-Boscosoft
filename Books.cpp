#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a,b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const float PI=acos(-1);
void solve()
{
    readi(n)
    readi(t)
    vector<int>vec(n);
    for (auto &e:vec)cin>>e;
    ll r=0,l=0,c=0,may=0;
    while (r<n)
    {
        c+=vec[r];
        while (c>t)
            c-=vec[l],l++;
        if ((r-l+1)>may)
            may=r-l+1;
        r++;
    }
    cout<<may<<endl;
}
main()
{
    INI solve();
}
//6 10
//2 3 4 2 1 1
//4
