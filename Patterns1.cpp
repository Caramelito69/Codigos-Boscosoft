#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(vec,a) vi vec(a); for(ll &e:vec)cin>>e;
#define printv(vec) for(ll &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern15()
{
    int n;cin>>n;
    for(int i=1;i<=n*2-1;i+=2)
    {
        for(int j=i;j<=n*2-1;j+=2)
            cout<<j<<" ";
        for(int j=1;j<=(i-2);j+=2)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern14()
{
    int n;cin>>n;
    n=n/2;
    forei(i,n,-n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        forei(j,n,abs(i))
            cout<<char((n*2+2)-((n*2+1)+i-n)+64)<<" ";
        cout<<endl;
    }
}
void pattern13()
{
    int n;cin>>n;
    forei(i,n,-n)
    {
        forei(j,n+1,abs(i)+1)
            cout<<char(j+64)<<" ";
        cout<<endl;
    }
}
void pattern12()
{
    int n;cin>>n;
    forei(i,n,-n)
    {
        fore(j,abs(i),n)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern11()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        forei(j,n-1,i)
            cout<<"  ";
        int j;
        for(j=i;j<=i*2-1;j++)
            cout<<j<<" ";
        for(j-=2;j>=i;j--)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern10()
{
       int n,d=1;cin>>n;
       fore(i,1,n)
       {
           fore(j,1,d)
                cout<<d<<" ";
            cout<<endl;
           d+=(i<(n/2+1)?2:-2);
       }
}
void pattern9()
{
    int n;cin>>n;
    forei(i,n,1)
    {
        fore(j,i,n-1)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<char(i+64)<<" ";
        cout<<endl;
    }
}
void pattern8()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        forei(j,n-1,i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<char(i*2-1+64)<<" ";
        cout<<endl;
    }
}
void pattern7()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        forei(j,n-1,i)
            cout<<"  ";
        fore(j,(i-1)*(i-1)+1,i*i)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern6()
{
    int n;cin>>n;
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        forei(j,i+((n-i+1)*2-1)-1,i)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern5()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        forei(j,n-1,i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern4()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        forei(j,n-1,i)
            cout<<"  ";
        fore(j,1,i)
            cout<<char(j+64)<<"   ";
        cout<<endl;
    }
}
void pattern3()
{
    int n;cin>>n;
    int d=n;
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"   ";
        int r=d;
        forei(j,n,i)
        {
            cout<<r<<" ";
            r-=i-j+n+1;
        }
        d+=i-1;
        cout<<endl;
    }
}
void pattern2()
{
    int n;cin>>n;
    int c=0;
    fore(i,1,n)
    {
        fore(j,1,i)
        {
            cout<<char((c++)%26+65)<<" ";
        }
        cout<<endl;
    }
}
void pattern1()
{
   int a;cin>>a;
   fore(i,1,a)
   {
       fore(j,1,i)
           cout<<(j&1)<<" ";
        cout<<endl;
   }
}
main()
{
    INI pattern15();
}
