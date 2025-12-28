#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern5()
{
    int speed=chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 generador(speed);
    readi(a)
    uniform_int_distribution<int>distribucion(1,a-1);
    vi vec;
    int may=0;
    fore(i,1,a)
    {
        int c=distribucion(generador);
        vec.pb(c);
        may=max(may,c);
    }
    forei(i,may,1)
    {
        fore(j,0,vec.size()-1)
        {
            if(i<=vec[j])
                cout<<"# ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    fore(i,0,vec.size()-1)
        cout<<i+1<<' ';
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==n/2+1||i==n/2+1||(j<=n/2+1&&i<=n/2+1&& j>n/2+1-i)||(j<=n/2+1&&i>=n/2+1&&j>i-(n/2+1)))
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(k,1,n)
    {
        fore(i,1,n)
        {
            fore(j,1,i)
                cout<<j<<' ';
            cout<<endl;
         }
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            if(i&1)
                cout<<i<<' ';
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,i,n)
            cout<<j<<' ';
        forei(j,i-1,1)
            cout<<j<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern5();
}
