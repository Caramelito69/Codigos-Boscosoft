#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a) int a,b;cin>>a>>b;
#define readi3(a) int a,b,c;cin>>a>>b>>c;
#define readi4(a) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
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
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<(i==n||j==1||j==i*2-1?"* ":"  ");
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,-n,n)
    {
        fore(j,1,abs(i)+1)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,1,i*2-1)
            if(j==1||j==i*2-1)
                cout<<i;
            else
                cout<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,0)
    {
        fore(j,1,i)
            cout<<"* ";
        cout<<i<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<(i&1?j*2-1:j*2)<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,1,n-i+1)
            cout<<i<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
