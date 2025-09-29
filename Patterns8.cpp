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
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<ll>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<ll,ii>
#define reads(s) string s;cin>>s;
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern6()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<"* ";
        cout<<endl;
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i*2-1)
            cout<<"* ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n*2-1)
            if(j>=i+1 && j<=2*n-i-1)
                cout<<"  ";
            else
                cout<<"* ";
        cout<<endl;
    }
}
void pattern4()
{
      readi(n)
      int d=1;
      forei(i,n,1)
      {
            fore(j,1,n-i)
                cout<<" _  _ ";
          fore(j,1,i)
                cout<<(d<10?" ":"")<<d++<<' ';
            fore(j,sum(i)-i+1,sum(i))
                cout<<(j<10?" ":"")<<j<<' ';
        cout<<endl;
      }
}
void pattern3()
{
    reads(s)
    forei(i,s.size(),1)
    {
        fore(j,1,i)
            cout<<s[j-1];
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        if(i&1)
            fore(j,sum(i-2),sum(i)-1)
                cout<<(j%9)+1<<' ';
        else
            fore(j,sum(i-2),sum(i)-1)
                cout<<char((j%27)+65)<<' ';
        cout<<endl;
    }
//    0 3 10 21
//    1 6 15
//    0 1 3 6 10 15 21
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        if(i&1)
            fore(j,(i/2+1)*(i/2+1)-i+1,(i/2+1)*(i/2+1))
                cout<<j<<' ';
        else
            fore(j,(i/2)*(i/2+1)-i+1,(i/2)*(i/2+1))
                cout<<char(j+64)<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
