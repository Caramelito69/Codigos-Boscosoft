#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define reads(n) string n;cin>>n;
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec,a) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define endl '\n'
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern7()
{
    reads(n)
    reverse(all(n));
    int d=0;
    fore(i,0,3)
    {
        fore(j,0,3)
            cout<<n[d++%n.size()]<<' ';
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    n=(n/2)+1;
    forei(i,(n-1),(-n+1))
    {
        fore(j,1,n-1-abs(i))
            cout<<"  ";
        fore(j,n-abs(i),n)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,1,i*2-1)
            if(j==1||j==i*2-1||i==n)
                cout<<"*";
            else
                cout<<" ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==n||i==n||i==j)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==1||i==n||i==j||(i<=n/2+1 && j+i==n+1))
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,0)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,0)
            cout<<char(j+65)<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        for(int j=i,d=n-1;j<=i+sum(n-1)-sum(n-i) && d>=0;j+=d,d--)
            cout<<j<<' ';
        cout<<endl;
    }
//5
//5 9 12 14 15  -> 1+2+3+4 = 10
//4 8 11 13       -> 2+3+4 = 9
//3 7 10            -> 3+4 = 7
//2 6                 -> 4  = 4
//1
}
main()
{
    INI pattern7();
}
