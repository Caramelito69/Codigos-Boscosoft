#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(b) cout<<#b<<' '<<b<<endl;
#define sum(n) ((n)*(n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern7()
{
    reads(cad)
    int d=0;
    forei(i,5,1)
    {
         fore(j,1,5-i)
            cout<<"  ";
        fore(j,1,i)
            cout<<cad[(d++%cad.size())]<<' ';
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    int d=1;
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,d)
            if(j==1||j==d)
                cout<<i<<' ';
            else
                cout<<"  ";
        d+=2;
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            if(i&1)
                cout<<j<<' ';
            else
                cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
void pattern4()
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
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j<=i)
                cout<<i<<' ';
            else
                cout<<j<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    int d=1;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<hex<<d++<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<char(i+64)<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
