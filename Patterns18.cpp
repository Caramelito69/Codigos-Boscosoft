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
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define pb push_back
#define emplace_back
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
    readi(h)
    readi(w)
    int t=(h*2-1)+(w-1)*(h*2-2)-1;
    int x=h-1,x1=h-1;
    fore(i,1,h)
    {
        fore(j,0,t)
        {
            if(((j-x)%((h-1)*2)==0||(j-x1)%((h-1)*2)==0))
                cout<<(j<10?"0":"")<<j;
            else
                cout<<"  ";
        }
        x--,x1++;
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==1||i==n/2+1||(i==1&&j<=n-1)||(i==n&&j<=n-1)||(j==n &&i>1&&i<n))
                cout<<'B';
            else
                cout<<' ';
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<(i<=j||i+j==n+1?"* ":"  ");
        cout<<endl;
    }
}
void pattern4()
{
    reads(cad)
    fore(i,0,cad.size()-1)
    {
        fore(j,0,cad.size()-1)
            if(j==cad.size()/2)
                cout<<cad[i]<<' ';
            else if(i==cad.size()/2)
                cout<<cad[j]<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(j==n/2+1)
                cout<<i<<' ';
            else if(i==n/2+1)
                cout<<j<<' ';
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
            if(i&1)
                cout<<j<<' ';
            else
                cout<<"* ";
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
        forei(j,i,1)
            cout<<j<<' ';
        fore(j,2,i)
            cout<<j<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern7();
}
