#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
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
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
vii bus(ll n)
{
    vii results;
    ll dos=2*n;
    ll may=(ll)sqrt(dos);
    fore(i,1,may)
    {
        if (dos%i==0)
        {
            ll dosf=dos/i;
            if ((dosf-i)&1)
            {
                ll doss=dosf-i+1;
                if (doss>0)
                {
                    ll s=doss/2,e=s+i-1;
                    results.pb({s, e});
                }
            }
        }
    }
    sort(all(results), [](ii& a,ii& b)
    {
        return a.F<b.F;
    });
    return results;
}
void solve()
{
        INI
        int n;
        while(cin>>n)
        {
            vii sum=bus(n);
            cout<<n<<':';
            fore(i,0,sum.size()-1)
                cout<<' '<<'('<<sum[i].F<<' '<<sum[i].S<<')';
            cout<<endl;
        }
}
main()
{
    solve();
}
