#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define int ll
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define readv(vec,n) readi(n) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) ((n)*((n)+1)/2)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern12()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,n,1)
            if(i==j||i+j==n+1)
                cout<<char(j+64)<<" ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern11()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,n,1)
            if(i==j||i+j==n+1)
                cout<<j<<" ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern10()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(i==j||j==1||j==n||i==1||i==n||j+i==n+1)
                cout<<"1 ";
            else
                cout<<"0 ";
        cout<<endl;
    }
}
void pattern9()
{
        readi(n)
        fore(i,1,n)
        {
            fore(j,1,n-i)
                cout<<"  ";
            forei(j,i,1)
                cout<<j<<" ";
            fore(j,2,i)
                cout<<j<<" ";
            cout<<endl;
        }
}
void pattern8()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        forei(j,(n+1-i)*2-2+i,i)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern7()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<" ";
        forei(j,i,1)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        forei(j,i,1)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    int c=1;
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"   ";
        fore(j,1,i)
        {
            cout<<c*c<<(c*c<10?" ":"")<<" ";
            c++;
        }
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,n,i)
            cout<<"  ";
        fore(j,1,i)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        int d=n-1;
        for(int j=i;j<=i+sum(n-1)-sum(n-i) && d>=0;j+=d--)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n-1,0)
    {
        fore(j,0,i)
            cout<<i%2<<" ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<(j%2)<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern12();
}
