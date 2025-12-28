#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
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
void pattern7()
{
    readi(n)
    int t=n-n/2+3;
    fore(i,1,n)
    {
        fore(j,1,n)
            if((j==1&&i<=t-1)||(i==1&&j<=t-1)||(j==t-1&&i<=t-1)||(i==t-1&&j<=t-1)||(i>=t-2&&j>=t-2&&i==j))
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,(n/2+1)-abs(i))
            cout<<(j==1||j==(n/2+1)-abs(i)?'*':' ')<<' ';
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    char d='*';
    fore(i,-n/2,n/2)
    {
        fore(j,1,(n/2+1)-abs(i))
            cout<<((abs(i)==0)?char(j+64):d)<<' ';
        cout<<endl;
    }
}
void pattern4()
{
        readi(n)
        forei(i,n,1)
        {
            fore(j,1,i)
                if(i&1)
                    cout<<j<<' ';
                else
                    cout<<char(j+64)<<' ';
            cout<<endl;
        }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            cout<<j<<' ';
        forei(j,i,1)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,i,n)
            cout<<char(j+64)<<' ';
        fore(j,1,i-1)
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<i<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
