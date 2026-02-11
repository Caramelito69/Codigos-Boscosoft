#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
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
    reads(cad);
    int cont[26]= {0};
    for(char c:cad)cont[c-'A']++;
    int im=0;
    char med=0;
    forn(i,26)
    if(cont[i]%2!=0)
        im++,med=i+'A';
    if(im>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    string cad1="";
    cad1.reserve(cad.size()/2);
    forn(i,26)cad1+=string(cont[i]/2,i+'A');
    cout<<cad1;
    if(im)cout<<med;
    reverse(all(cad1));
    cout<<cad1<<endl;
}
main()
{
    INI solve();
}


