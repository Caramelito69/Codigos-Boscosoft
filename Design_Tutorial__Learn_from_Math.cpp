#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define int long long
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec,a) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) ((n)*((n)+1)/2)
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const ll tam=1e7;
vector<ll>primos;
vector<bool>vec;
void criba()
{
    vec.assign(tam/2,1);
    vec[0]=0;
    for(ll i=1;(2*i+1)*(2*i+1)<tam;i++)
        if(vec[i])
        {
            ll p=2*i+1;
            for(ll j=p*p;j<tam;j+=2*p)
                vec[j/2]=0;
        }
}
void solve1()
{
    readi(n)
    if(n&1)
    {
        int u=n%10;
        int d=n-u;
        while((vec[u/2] && (u%2!=0 || u==2)) || (vec[d/2] && (d%2!=0 || d==2)) || u==1||d==1)
            d--,u++;
        cout<<d<<" "<<u;
    }
    else
        cout<<4<<' '<<n-4;
}
void solve()
{
    readi(n)
    if(n&1)
        cout<<9<<' '<<n-9;
    else
        cout<<4<<' '<<n-4;
}
main()
{
    criba(); INI solve();
}
