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
void pattern7()
{
    readi(n)
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i))
            cout<<"# ";
        fore(j,1,n/2-1)
            cout<<". ";
        fore(j,1,n-(n/2-1)-abs(i))
            cout<<"# ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    int d=1;
    fore(j,-n+1,n-1)
    {
        fore(i,1,n-abs(j)-1)
            cout<<"  ";
        fore(i,1,(abs(j)+1)*2-1)
            cout<<d<<' ';
        cout<<endl;
        d++;
    }
}
void pattern5()
{
    readi(n)
    forei(j,n/2,-n/2)
    {
        fore(i,1,abs(j))
            cout<<"  ";
        cout<<char(abs(j)+65)<<' '<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(j,n,0)
    {
        fore(i,1,j)
            cout<<"* ";
        cout<<j<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<j<<' ';
        fore(j,1,i)
            cout<<n-i+1<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    int d=1;
    forei(i,n/2,-n/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,(n/2+1)-abs(i))
            cout<<char(d+64)<<' ';
        d++;
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        forei(j,i,1)
            cout<<j<<"   ";
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
