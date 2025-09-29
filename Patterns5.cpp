#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define int long long
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec,a) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) ((n)*((n)+1)/2)
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern7()
{
    readi(n)
    fore(i,0,n)
    {
        fore(j,0,i)
            if(j==i)
                cout<<i<<" ";
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern6()
{
    reads(n)
    fore(i,0,n.size()-1)
    {
        fore(j,1,i)
            cout<<"  ";
        fore(j,0,n.size()-1-i)
            cout<<n[j]<<" ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    int d=1;
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,1,d)
            if(j==1||j==d)
                cout<<i<<" ";
            else
                cout<<"  ";
        cout<<endl;
        d+=2;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        forei(j,i,1)
            cout<<(j==i||j==1||i==n?"* ":"  ");
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==i||j+i==n+1)
                cout<<"O ";
            else
                cout<<"X ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            if(i&1)
                cout<<char(j+64)<<" ";
            else
                cout<<j<<" ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,i-1,1)
            cout<<"  ";
        fore(j,1,n-i+1)
            cout<<char(i+64)<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
