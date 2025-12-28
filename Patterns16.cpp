#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
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
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
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
    fore(j,1,n)
    {
        fore(i,1,n)
            if(j==n/2+1||i==n||(i==1&&j<=n/2+1))
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i)
            cout<<i<<' ';
        fore(j,1,i)
            cout<<char(i+64)<<' ';
        cout<<endl;
    }
}
void pattern4()
{
        readi(n)
        fore(k,1,n)
        {
            fore(j,1,k)
            {
                fore(i,1,j)
                    cout<<"* ";
                cout<<endl;
            }
            cout<<endl;
        }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        cout<<i<<' ';
        if(i==1)
            forei(j,n*2-3+n,n*2-1)
                cout<<(j<10?" ":"")<<j<<' ';
        else
            fore(j,1,n-i)
                if(j==n-i)
                    cout<<"  "<<(n*2-1-(i-1))<<"  ";
                else
                    cout<<"   ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(j,n,1)
    {
        fore(i,1,j)
            if(j&1)
                cout<<i<<' ';
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        if(i&1)
            fore(j,1,n)
                cout<<j<<' ';
        else
            forei(j,n,1)
                cout<<j<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
