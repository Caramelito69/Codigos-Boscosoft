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
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
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
void pattern12()
{
        readi(n)
        int d=1,c=1;
        fore(i,1,n)
        {
            fore(j,d,d+n-1)
                cout<<j<<' ';
            if(i==(n/2)+bool(n/2))
                c=-1,d+=(n*c);
            else
                d+=n*2*c;
            cout<<endl;
        }
//    10
//    10
//    5
//    10

//    14
//    14
//    14
//    7
//    14
//    14
}
void pattern11()
{
    readi(n)
    fore(i,-n/2,n/2)
    {
        fore(j,1,n-abs(i)*2)
            cout<<n-abs(i)*2<<' ';
        cout<<endl;
    }
}
void pattern10()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<i<<' ';
        cout<<endl;
    }
}
void pattern9()
{
    readi(n)
    forei(j,n,1)
    {
        fore(i,1,n-j)
            cout<<"* ";
        fore(i,1,j)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern8()
{
    readi(n)
    forei(i,n+1,1)
    {
        fore(j,1,i)
            cout<<char(i+64)<<' ';
        fore(j,1,n+1-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern7()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        forei(j,i*2-1,1)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<i<<' ';
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
void pattern4()
{
    readi(a)
    int d=a;
    forei(i,a,1)
    {
        int m=d;
        fore(j,1,i)
            cout<<char(64+m--)<<' ';
        cout<<endl;d++;
    }
}
void pattern3()
{
    readi(a)
    int d=a*(a+1)-(a-1);
    forei(i,a,1)
    {
        int m=d;
        d-=(i-1);
        fore(j,1,i)
            cout<<m++<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            if((i+j)&1)
                cout<<"1 ";
            else
                cout<<"0 ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    int d=n*2,m=0;
    forei(i,n,1)
    {
         m+=((n-i+1)&1?1:d),d-=2;
         int d1=m;
        fore(j,1,n-i+1)
        {
            cout<<d1<<(d1<10?" ":"")<<' ';
            if((i+j)&1)
                d1-=(i*2-1);
            else
                d1-=(j*2);
        }
        cout<<endl;
    }
}
main()
{
    INI pattern12();
}
