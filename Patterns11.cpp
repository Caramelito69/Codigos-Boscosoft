#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define reads(n) string n;cin>>n;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ii pair <ll,ll>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n';
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern7()
{
    readi(n)
    forei(i,n/2,-n/2)
    {
        fore(j,1,abs(i)+1)
            cout<<(j==1||j==abs(i)+1?"K ":"  ");
        cout<<endl;
    }
}
void pattern6()
{
    readi(h)
    readi(w)
    int is=1,os=2,inc=1;
    int jump=(h*3)-(w+1);
    int ch='a'+h-1;
    fore(i,1,h)
    {
        fore(j,1,w)
        {
            fore(k,1,os)
                cout<<' ';
            cout<<char(ch);
            fore(k,1,is)
                cout<<' ';
            ch+=inc;
            if(ch>'z')
                ch-=26;
            cout<<char(ch);
            fore(k,1,os)
                cout<<' ';
            cout<<' ';
            ch+=jump;
            if(ch>'z')
                ch-=26;
        }
        os=(i+1!=h);
        is=(i+1!=h?3:5);
        ch='a'+h-i-1;
        inc+=2;
        jump-=2;
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n/2,-n/2)
    {
        fore(j,1,n/2+1)
            if(j==1||i==n/2||(j==n/2+1&&i>=0)||i==0||(i<0 && abs(i)+1==j))
                cout<<"R ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(k,1,n)
    {
        fore(i,1,k)
        {
            fore(j,1,i)
                cout<<char(i+64)<<' ';
            cout<<endl;
        }
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            if(j&1)
                cout<<i<<' ';
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i+1)
            cout<<j<<' ';
        fore(j,1,i-1)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n-1,-n+1)
    {
        fore(j,1,n-abs(i))
            cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
