#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int long long
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<int>
#define vs vector<string>
#define ii pair<ll,ll>
#define vii vector<ii>
#define viii vector<ll,ii>
#define F first
#define S second
#define reads(n) string n;cin>>n;
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec,n) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(n) cout<<#n<<'='<<n<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern8_1()
{
    readi(n)
    int x=1;
    fore(i,1,n)
    {
        fore(j,1,n)
            if((j<=x||j>=n-x+1)&& j&1)
                cout<<"* ";
            else if((j>=x&& j<=n-x+1&& i&1))
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
        x+=(i<=n/2?1:-1);
    }
}
void pattern8()
{
    readi(n)
    int d=n/2,d1=n-2;
    fore(i,1,d)
    {
        fore(j,1,i)
            if(j&1)
                cout<<"* ";
            else
                cout<<"  ";

        if(i&1)
            fore(j,1,d1)
                cout<<"* ";
        else
            fore(j,1,d1)
                cout<<"  ";

        forei(j,i,1)
            if(j&1)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
        d1-=2;
    }
    d1+=2;
    fore(i,1,n)
        cout<<(i&1?"* ":"  ");
    cout<<endl;
    forei(i,d,1)
    {
        fore(j,1,i)
            cout<<(j&1?"* ":"  ");
        if(i&1)
            fore(j,1,d1)
                cout<<"* ";
        else
            fore(j,1,d1)
                cout<<"  ";

        forei(j,i,1)
            cout<<(j&1?"* ":"  ");
        d1+=2;
        cout<<endl;
    }
}
void pattern7()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if((i+j)&1)
                cout<<"  ";
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,-n)
    {
        forei(j,abs(i),0)
            cout<<char(j+65)<<' ';
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(k,1,n)
    {
        fore(i,1,n)
        {
            fore(j,1,i)
                cout<<"* ";
            cout<<endl;
        }
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,1,n-i+1)
            if(i&1)
                cout<<"#   ";
            else
                cout<<"*   ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,0,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        fore(j,1,i+1)
            cout<<char(i+65)<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    int d=1;
    fore(i,1,n)
    {
        if(i&1)
        {
            fore(j,d,d+n-1)
                cout<<j<<' ';
            d+=n*2-1;
        }
        else
        {
            forei(j,d,d-n+1)
                cout<<j<<' ';
            d++;
        }
        cout<<endl;
    }
}
void pattern1()
{
        readi(n)
        n++;
        forei(i,n,1)
        {
            fore(j,1,n)
                if(i<j)
                    cout<<"* ";
                else
                    cout<<char(i+64)<<' ';
            cout<<endl;
        }
}
main()
{
    INI pattern8_1();
}
