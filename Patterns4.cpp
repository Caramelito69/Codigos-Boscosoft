#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query readi(n) while(n--)
#define int long long
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define readi(n) int n;cin>>n;
#define reads(s) string s;cin>>s;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define viii vector<ll,ii>
#define readv(vec,a) readi(a) vi vec(a); for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
void pattern6()
{
        readi(n)
        n/=2;
        forei(i,n,-n)
        {
            fore(j,1,abs(i))
                cout<<"  ";
            fore(j,abs(i)+1,abs(i)+n-1)
                cout<<j<<' ';
            cout<<endl;
        }
}
void pattern5()
{
    readi(n)
    n/=2;
    int d=1;
    forei(i,n,-n)
    {
        fore(j,1,n-abs(i)+1)
            if(j==n-abs(i)+1)
                cout<<char(d+64)<<' ';
            else
                cout<<"  ";
        cout<<endl;
        d++;
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(i==1||i==n||j==1||j==n)
                cout<<"* ";
            else
                cout<<"# ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<(i&1?'#':'*')<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i-1)
            cout<<j<<' ';
        fore(j,1,n-i+1)
            cout<<i<<' ';
        cout<<endl;
    }
}
void pattern1()
{
        readi(n)
        forei(i,n,-n)
        {
            fore(j,abs(i),n)
                cout<<char(j+65)<<' ';
            cout<<endl;
        }
}
main()
{
    INI pattern6();
}
