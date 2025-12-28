#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a) int a,b;cin>>a>>b;
#define readi3(a) int a,b,c;cin>>a>>b>>c;
#define readi4(a) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(a) while(a--)
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
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern6()
{
    readi(n)
    int d=-1;
    forei(i,n/2,1)
    {
        fore(j,1,i)
            cout<<"* ";
        fore(j,1,d)
            cout<<"  ";
        fore(j,1,n-i-(d<0?0:d))
            cout<<"* ";
        d+=2;
        cout<<endl;
    }
    d-=2;
    fore(i,2,n/2+1)
    {
        fore(j,1,i)
            cout<<"* ";
        fore(j,1,d)
            cout<<"  ";
        fore(j,1,n-i-(d<0?0:d))
            cout<<"* ";
        d-=2;
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    int d=1;
    forei(i,n-1,-n+1)
    {
        fore(j,1,n-abs(i)-1)
            cout<<"  ";
        fore(j,1,abs(i)*2+1)
            cout<<d<<' ';
        d++;cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    int d=1;
    forei(i,n/2,-n/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,n-abs(i)*2)
            cout<<char(d+64)<<' ';
        cout<<endl;
        d++;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n/2,-n/2)
    {
        forei(j,n/2,-n/2)
            if(i==0)
                cout<<abs(j)<<' ';
            else if(j==0)
                cout<<abs(i)<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    int d=1;
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<d++<<' ';
       fore(j,sum(i-1)+1,sum(i))
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"   ";
        fore(j,1,i*2-1)
            cout<<i*2-1<<"  ";
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
