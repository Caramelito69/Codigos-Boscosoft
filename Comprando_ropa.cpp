#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define PB push_back
#define EB push_back
#define reads(a) string a;cin>>a;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define int ll
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double dl;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
void solve()
{
    readi2(m,c)
    bitset<205>vec;
    vec[0]=1;
    fore(i,0,c-1)
    {
        readi(k)
        bitset<205>vec1;
        while (k--)
        {
            readi(p)
            vec1|=(vec<<p);
        }
        vec=vec1;
    }
    int ans=-1;
    forei(i,m,0)
        if (vec[i])
        {
            ans=i;
            break;
        }
    if (ans!=-1)
        cout<<ans;
    else
        cout << "no tiene solucion";
    cout<<endl;
}
main()
{
     query solve();
}
