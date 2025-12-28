#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
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
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
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
void solve()
{
        readv(a,n);
        vi pares;
        for (int x:a)
        {
            if (!(x&1))
            {
                pares.pb(x);
                if (pares.size()==2)
                    break;
            }
        }
        if (pares.size()>=2)
        {
            cout<<pares[0]<<' '<<pares[1]<<endl;
            return;
        }
        if (!pares.empty())
        {
            int par=pares[0];
            for (int x:a)
            {
                if (x>=par) break;
                if (x&1 && par%x==0)
                {
                    cout<<x<<' '<<par<<endl;
                   return;
                }
            }
        }
        fore(i,0,n-1)
        {
            int x=a[i];
            auto it=upper_bound(a.begin(), a.end(), x);
            while (it!=a.end()&& *it<2*x)
            {
                int y=*it;
                if ((y%x)%2==0)
                {
                    cout << x << " " << y << "\n";
                   return;
                }
                it++;
            }
            fore(j,i+1,n-1)
            {
                int y=a[j];
                if (y%x==0)
                {
                    cout << x << " " << y << "\n";
                   return;
                }
            }
        }
        fore(i,0,min(n, ll(100)))
        {
            fore(j,i+1,n-1)
            {
                if ((a[j]%a[i])%2==0)
                {
                    cout<<a[i]<<' '<<a[j]<<endl;
                   return;
                }
            }
        }
        cout << "-1\n";return;
}
main()
{
    INI query solve();
}
