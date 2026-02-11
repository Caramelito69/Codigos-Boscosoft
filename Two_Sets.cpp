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
    readi(n);
    ll n1=n;
    ll total=sum(n1);
    if (total&1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        vi set1,set2;
        ll s=total/2;
        forei(i,n1,1)
        {
            if (i<=s)
            {
                set1.PB(i);
                s-=i;
            }
            else
                set2.PB(i);
        }
        cout<<set1.size()<<endl;
        forn(i, set1.size())
        cout<<set1[i]<<(i==set1.size()-1?"":" ");
        cout<<endl;
        cout<<set2.size()<<endl;
        forn(i,set2.size())
        cout<<set2[i]<<(i==set2.size()-1?"":" ");
        cout<<endl;
    }
}
main()
{
    INI solve();
}
