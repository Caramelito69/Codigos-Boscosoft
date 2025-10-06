#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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
const int tam=100;
vector<bool>vec;
unordered_map<int,int>primos;
void criba()
{
    int d=1;
    vec.assign(tam/2,1);
    vec[0]=0;
    for(int i=3;i*i<tam;i+=2)
        if(vec[i/2])
            for(int j=i*i;j<tam;j+=2*i)
                if(vec[j/2])
                    vec[j/2]=0;
    primos[2]=d++;
    for(int j=3;j<tam;j+=2)
        if(vec[j/2])
            primos[j]=d++;
}
void solve()
{
    readi(a)
    readi(b)
    cout<<(primos[a]+1==primos[b]?"YES":"NO");
}
main()
{
    criba();
    INI solve();
}
