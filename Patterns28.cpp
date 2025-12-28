#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(vec) begin(vec),end(vec)
#define rall(vec) rbegin(vec),rend(vec)
#define F first
#define S second
#define pb push_back
#define emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern7()
{
    readi(n)
    vi vec(n);
    int may=0;
    for(auto &e:vec)
    {
        cin>>e;
        may=max(may,e);
    }
    forei(i,may,1)
    {
        for(auto e:vec)
            if(e>=i)
                cout<<"# ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    int c=1;
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<(1&c++?"* ":"# ");
        cout<<endl;
    }
}
void pattern5()
{
    readi(a)
    int c=1;
    fore(i,-a/2,a/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,a-abs(i)*2)
            cout<<char(c+64)<<' ';
        c++;cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            if(i&1)
                cout<<char(i+64)<<' ';
            else
                cout<<i<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    int c=1;
    fore(i,1,n)
    {
        fore(j,1,n)
            if((i+j)&1)
                cout<<char(64+c++)<<' ';
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n+1)
    {
        fore(j,2,i)
            cout<<"0 ";
        fore(j,i*2-1,n+i)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(a)
    fore(i,1,a)
    {
        fore(j,1,a-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<"* ";
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
