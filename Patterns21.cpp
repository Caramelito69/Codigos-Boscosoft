#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v);
#define rall(v) rbegin(v),rend(v);
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern8()
{
    readi2(h,w)
    int x1,x2,t=(h*2-1)+(w-1)*(h*2-2);
    x1=x2=h-1;
    fore(i,1,h)
    {
        fore(j,0,t-1)
            if((j-x1)%(h*2-2)==0||(j-x2)%(h*2-2)==0)
                cout<<"|";
            else
                cout<<" ";
        x1--,x2++;
        cout<<endl;
    }
}
void pattern7()
{
    readi(a)
    int d=1;
    fore(i,1,a)
    {
        if(i&1)
        {
            fore(j,d,d+3)
                cout<<(j<10?"0":"")<<j<<' ';
            d+=7;
        }
        else
        {
            forei(j,d,d-3)
                cout<<(j<10?"0":"")<<j<<' ';
            d++;
        }
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(i==1||i==n||(i<=n/2+1&&j==1)||(i>=n/2+1&&j==n)||i==n/2+1)
                cout<<"5 ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(a)
    fore(i,-a/2,a/2)
    {
        fore(j,1,abs(i))
            cout<<"# ";
        fore(j,1,a/2-1)
            cout<<". ";
        fore(j,1,a-(a/2-1)-abs(i))
            cout<<"# ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(i,-n,n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,n+1-abs(i))
            cout<<char(n-abs(i)+65)<<"   ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(a)
    fore(i,1,a)
    {
        fore(j,1,a)
            if(i==a/2+1)
                cout<<j<<' ';
            else if(j==a/2+1)
                cout<<i<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(a)
    forei(i,a,1)
    {
        fore(j,1,i)
            cout<<j<<' ';
        fore(j,1,a-i)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(a)
    forei(i,a,1)
    {
        fore(j,1,a-i)
            cout<<" ";
        fore(j,1,i)
            cout<<i<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern8();
}
