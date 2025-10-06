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
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec,a) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
void pattern7()
{
    reads(n)
    int t=n.size();
    fore(i,1,t)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,0,t-i)
            cout<<n[j]<<' ';
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,i,i*2-1)
            if(j==i||j==i*2-1)
                cout<<char(i+64)<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n,1)
    {
        forei(j,n,1)
            if(i==j||i+j==n+1)
                cout<<char(i+64)<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    int d=2,d1=1;
    fore(i,1,n)
    {
        if(i&1)
        {
            int e=d1;
            fore(j,1,i*2-1)
                if(j&1)
                    cout<<e++<<' ';
                else
                    cout<<"# ";
            d1+=d;
        }
        else
        {
            int e=d1;
            fore(j,1,i*2-1)
                if(j&1)
                    cout<<e--<<' ';
                else
                    cout<<"# ";
            d1++;
        }
        d+=2;
        cout<<endl;
    }
//    1 3 4 10 11 21
//     2  1 6   1  10
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,sum(i-1)+1,sum(i))
            cout<<j<<' ';
        forei(j,sum(i)-1,sum(i-1)+1)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<"* ";
        forei(j,i,1)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern1()
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
main()
{
    INI pattern7();
}
