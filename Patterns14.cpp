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
        int d=-1;
        forei(i,n/2,-n/2)
        {
            fore(j,1,abs(i)+1)
                cout<<"* ";
            fore(j,1,d)
                cout<<"  ";
            fore(j,(abs(i)+2+(d>0?d:0)),n)
                cout<<"* ";
            if(i>0)
                d+=2;
            else
                d-=2;
            cout<<endl;
        }
}
void pattern5()
{
    readi(n)
    int d=1;
    forei(i,n/2,-n/2)
    {
        fore(j,1,n/2-abs(i))
            cout<<"  ";
        fore(j,1,abs(i)+1)
            cout<<char(64+d)<<' ';
        d++;
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    forei(i,n,-n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,n-abs(i)+1)
            cout<<j<<"   ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,-n)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        fore(j,1,(n-abs(i)+1))
            cout<<"*   ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"* ";
        fore(j,1,i)
            cout<<i<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i)
            cout<<"* ";
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
