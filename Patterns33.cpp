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
#define pb push_back
#define eb emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(int &e:vec)cin>>e;
#define printv(vec) for(int e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
const int tam=999984;
vi primos;
vb esprimo;
void criba()
{
    esprimo.assign(tam/2,1);
    esprimo[0]=0;
    for(int i=3;i*i<tam;i+=2)
        if(esprimo[i/2])
            for(int j=i*i;j<tam;j+=2*i)
                esprimo[j/2]=0;
    primos={2};
    for(int i=3;i<tam;i+=2)
        if(esprimo[i/2])
            primos.eb(i);
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            if(i&1)
                cout<<char(j+64)<<' ';
            else
                cout<<j<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<primos[(i-1)*n+j-1]<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,-n,n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,abs(i)+1,n+1)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,n-1,i)
            cout<<"  ";
        fore(j,1,i)
            cout<<i<<' ';
        cout<<endl;
    }
}
main()
{
    INI
    criba();
    pattern4();
}
