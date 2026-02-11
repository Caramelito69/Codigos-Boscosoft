#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define forn(i,n) for(int i=0;i<int(n);i++)
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define ii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define vi vector<int>
#define vb vector<bool>
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(h,w);
    vector<string>a(h),b(h);
    forn(i,h)cin>>a[i];
    forn(i,h)cin>>b[i];
    forn(s,h)
    {
        forn(t,w)
        {
            bool ok=true;
            forn(i,h)
            {
                forn(j,w)
                {
                    if(a[(i+s)%h][(j+t)%w]!=b[i][j])
                    {
                        ok=false;
                        break;
                    }
                }
                if(!ok)break;
            }
            if(ok)
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;
}
main()
{
    INI solve();
}


#include<bits/stdc++.h>
using namespace std;
#define readi(a) int a;cin>>a;
#define vi vector<int>
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define print(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define query readi(n) while(n--)
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void uwu()
{
    readi(h);
    readi(w);
    vector<string>a(h),b(h);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;
    for(int s=0;s<h;s++)
        for(int t=0;t<w;t++)
        {
            bool k=1;
            for(int i=0;i<h;i++)
            {
                for(int j=0;j<w;j++)if(a[(i+s)%h][(j+t)%w]!=b[i][j])
                    {
                        k=0;
                        break;
                    }
                if(!k)break;
            }
            if(k)
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
    cout<<"No"<<endl;
}
int main()
{
    INI;
    uwu();
}
