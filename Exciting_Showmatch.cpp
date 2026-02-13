#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
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
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
const int M=998244353;
const int N=300005;
int f[N],iv[N];
int prim(int b,int p)
{
    int r=1;
    while(p)
    {
        if(p&1)r=r*b%M;
        b=b*b%M;
        p>>=1;
    }
    return r;
}
void pre()
{
    f[0]=1,iv[0]=1;
    fore(i,1,N-1)
        f[i]=f[i-1]*i%M;
    iv[N-1]=prim(f[N-1],M-2);
    forei(i,N-2,1)
        iv[i]=iv[i+1]*(i+1)%M;
}
int comb(int n,int r)
{
    if(r<0 || r>n) return 0;
    return f[n]*iv[r]%M*iv[n-r]%M;
}
void solve()
{
    readi(n)
    int m=2*n;
    vi a(m);
    fore(i,0,m-1)cin>>a[i];
    int cont=0,par=0,imp=0,tam=0;
    fore(i,0,m-1)
    {
        tam++;
        if(i==m-1 || a[i+1]!=a[i]+1)
        {
            cont+=(tam-1);
            if(tam%2==0)
                par++;
            else
                imp++;
            tam=0;
        }
    }
    int c=comb(imp,imp/2)*prim(2,par)%M;
    cout<<cont<<" "<<c<<endl;
}
main()
{
    INI pre();
    query solve();
}
