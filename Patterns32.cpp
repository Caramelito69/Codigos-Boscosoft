#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi2(a) int a,b,c;cin>>a>>b>>c;
#define readi2(a) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
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
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<char(i+64)<<' ';
        fore(j,1,n-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<"1 ";
        fore(j,1,n-i)
            cout<<"0 ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    int d=n;
    fore(i,1,n)
    {
        fore(j,1,n)
        {
            if(i==j or i+j==n+1)
                cout<<char(j+96)<<' ';
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<(j&1?'#':'*')<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    int d=n;
    fore(i,1,n+1)
    {
        fore(j,1,i-1)
            cout<<"0 ";
        fore(j,i*2-1,(i*2-1)+d)
            cout<<j<<' ';
        cout<<endl;
        d--;
    }
}
main()
{
    INI pattern5();
}
