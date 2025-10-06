#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define reads(n) string n;cin>>n;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ii pair <ll,ll>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n';
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const int tam=999984;
vector<bool>primos;
void criba()
{
    primos.assign(tam/2,1);
    primos[0]=0;
    for(int i=3;i*i<tam;i+=2)
        if(primos[i/2])
            for(int j=i*i;j<tam;j+=2*i)
                primos[j/2]=0;
}
int suma(int n)
{
    int s=0;
    while(n)
       s+=(n%10),n/=10;
    return s;
}
void solve()
{
    int n;
    while(cin>>n)
    {

        if((primos[n/2] && n&1)||n==2)
        {
            int c=suma(n);
            int tam1=int(log10(c))+1;
            while(((primos[c/2] && c&1)||c==2)&&tam1>1)
                c=suma(c),tam1=(log10(c))+1;
            if(((primos[c/2] && c&1)||c==2))
                cout<<"true";
            else
                cout<<"false";
        }
        else
            cout<<"false";
        cout<<endl;
    }
}
main()
{
    criba();
    solve();
}
