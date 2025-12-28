#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a) int a,b;cin>>a>>b;
#define readi3(a) int a,b,c;cin>>a>>b>>c;
#define readi4(a) int a,b,c,d;cin>>a>>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
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
#define readv(vec,a) readi(n) vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
int m[5][5];
void pattern6()
{
    int posx,posy;
    fore(i,0,4)
        fore(j,0,4)
        {
            cin>>m[i][j];
            if(m[i][j]==1)
                posx=i+1,posy=j+1;
        }
    cout<<abs(3-posx)+abs(3-posy);
}
void pattern5()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i)
            cout<<" ";
        fore(j,1,i*2-1)
            cout<<(j==1||j==i*2-1?"*":" ");
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<((i+j&1?'X':'O'))<<' ';
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        forei(j,i,1)
            cout<<j<<' ';
        fore(j,2,i)
            cout<<j<<' ';
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"   ";
        fore(j,sum(i-1)+1,sum(i))
            cout<<(j*2<10?" ":"")<<j*2<<' ';
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
                cout<<((i+j)&1?'0':'1')<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern6();
}
