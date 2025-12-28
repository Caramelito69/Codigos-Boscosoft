#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define reads(a) string a;cin>>a;
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define aureo (1+sqrt(5))
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define sum(n) (n)*((n)+1)/2
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern4()
{
    readi(n)
    int d=1;
    forei(i,n,1)
    {
        fore(j,1,i)
            if(d&1)
                cout<<"# ";
            else
                cout<<"* ";
        d++;
        cout<<endl;
    }
}
void pattern3()
{
        readi(a)
        fore(i,1,a)
        {
            fore(j,1,i)
                cout<<j<<' ';
            fore(j,1,a-i)
                cout<<i<<' ';
            cout<<endl;
        }
}
void pattern2()
{
    readi(n)
    int d=0;
    fore(i,1,n)
    {
        fore(j,1,n)
        {
            d%=8;
            cout<<++d<<' ';
        }
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,i,n)
            cout<<j<<' ';
        fore(j,n+1,n+(n-i))
            cout<<j<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern4();
}
