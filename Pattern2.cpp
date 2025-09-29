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
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<ll,ii>
#define read(n) int n;cin>>n;
#define readv(vec,a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<" ";
#define int long long
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void pattern20()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i-1)
            cout<<i<<" ";
        fore(j,i,n)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern19()
{
    read(n)
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<j<<" ";
        fore(j,i,n)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern18()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i-1)
            cout<<j<<" ";
        forei(j,n,i)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern17()
{
    read(n) n++;
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,1)
            cout<<char(j+64)<<" ";
        cout<<endl;
    }
}
void pattern16()
{
    read(n) n++;
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,1)
            cout<<char(i+64)<<" ";
        cout<<endl;
    }
}
void pattern15()
{
    read(n) n++;
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,1)
            cout<<char(j+64)<<" ";
        cout<<endl;
    }
}
void pattern14()
{
    read(n) n++;
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        fore(j,1,i)
            cout<<char(i+64)<<" ";
        cout<<endl;
    }
}
void pattern13()
{
    read(n) n++;
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<char(j+64)<<" ";
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern12()
{
    read(n) n++;
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<char(i+64)<<" ";
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern11()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<char(j+64)<<" ";
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern10()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<char(i+64)<<" ";
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern9()
{
    read(n)
    forei(i,n,1)
    {
        fore(j,i,n-1)
            cout<<"* ";
        forei(j,i,1)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern8()
{
    read(n)
    forei(i,n,1)
    {
        fore(j,i,n-1)
            cout<<"* ";
        fore(j,1,i)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern7()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,1)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern6()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        fore(j,1,i)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern5()
{
    read(v)
    forei(i,v,1)
    {
        fore(j,1,i)
            cout<<j<<" ";
        fore(j,1,v---i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
    read(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<i<<" ";
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern3()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<j<<" ";
        forei(j,n-1,i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern2()
{
    read(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<i<<" ";
        forei(j,n-1,i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern1()
{
    read(n)
    forei(i,n,1)
    {
        forei(j,n,i)
            cout<<i<<" ";
        fore(j,1,i-1)
            cout<<char(n-i+65)<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern20();
}
