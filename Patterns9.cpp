#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int long long
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a); for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
#define dbg(v) cout<<#v<<' '<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern13()
{
        readi(h)
        readi(w)
        fore(i,1,h)
        {
            fore(j,1,w)
            {
                if(i==1)
                    cout<<"  0 0  ";
                else if(i==h)
                    cout<<"0     0";
                else
                    cout<<" 0   0 ";
            }
            cout<<endl;
        }
}
void pattern12()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(i==1||i==n||j==n||(i==n/2+1)||(j==1&& n/2+1>=i))
                cout<<"9 ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern11()
{
    readi(n)
    fore(i,1,n/2)
    {
        fore(j,1,n-i*2)
            cout<<"  ";
        fore(j,1,i*2)
            cout<<"* ";
        cout<<endl;
        fore(j,1,n-i*2)
            cout<<"  ";
        fore(j,1,i*2)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern10()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,1,i)
            cout<<"* ";
        fore(j,1,(n-i)*2)
            cout<<" ";
        fore(j,1,i)
            cout<<"* ";
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
        if(i&1)
            fore(j,1,i)
                cout<<i<<' ';
        else
            fore(j,1,i)
                cout<<"* ";
        cout<<endl;
    }
}
void pattern8()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,i,n)
            cout<<i<<' ';
        fore(j,1,i-1)
            cout<<char(n-i+65)<<' ';
        cout<<endl;
    }
}
void pattern7()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            if(j==1||j==i||i==n)
                cout<<i<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n)
            if(j==n/2+1)
                cout<<i<<' ';
            else if(i==n/2+1)
                cout<<j<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            if(j&1)
                cout<<j<<' ';
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<i<<' ';
        fore(j,i+1,n)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,-n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,n-abs(i)+1)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,1,i)
            cout<<char(j+64)<<" ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        forei(j,n+i-1,i*2-1)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern13();
}
