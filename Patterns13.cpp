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
#define ii pair<ll,ll>
#define vi vector<int>
#define vii vector<ll,ll>
#define vs vector<string>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<' ';cout<<endl;
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
    reads(n)
    forei(i,n.size()-1,0)
    {
        forei(j,n.size()-1,0)
            cout<<n[j]<<' ';
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,i,n)
            if(j==i||j==n||i==1)
                cout<<j<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n,0)
    {
        cout<<i<<' ';
        forei(j,i,1)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,i,1)
            cout<<char(i+64)<<' ';
        fore(j,i+1,n)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,i,n)
            cout<<j<<' ';
        fore(j,n-i+2,n)
            cout<<n<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<i*2-1<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<' ';
        fore(j,1,i)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
