#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define int ll
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void pattern14()
{
    int n;cin>>n;
    int f1=(n-1)*2,c=n;
    int c2=n*2-1;
    fore(i,1,n)
    {
        int d=c;
        int c1=2;
        if(i&1)
        {
            fore(j,1,i)
            {
                cout<<d<<" ";
                d-=(j&1?c2:c1);
                c1+=2;
            }
        }
        else
        {
            fore(j,1,i)
            {
                cout<<d<<" ";
                d-=(j&1?c1:c2);
                c1+=2;
            }
        }
        c+=(i&1?1:f1);
        f1-=2,c2-=2;
        cout<<endl;
    }
}
void pattern13()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,i)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}
void pattern12()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        int c=i*2-1;
        fore(j,1,i)
        {
            cout<<c<<" ";
            c+=2;
        }
        cout<<endl;
    }
}
void pattern11()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        int c=i;
        fore(j,1,i)
            cout<<c++<<" ";
        cout<<endl;
    }
}
void pattern10()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<j*2<<" ";
        cout<<endl;
    }
}
void pattern9()
{
    int n;cin>>n;
    forei(i,n,1)
    {
        int c=i;
        forei(j,n,1)
        {
            cout<<char(c+64)<<" ";
            c+=n;
        }
        cout<<endl;
    }
}
void pattern8()
{
    int n;cin>>n;
    int c=0;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<char(((c++)%26)+65)<<" ";
        cout<<endl;
    }
}
void pattern7()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<char(i+64)<<" ";
        cout<<endl;
    }
}
void pattern6()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<(i+j&1?0:1)<<" ";
        cout<<endl;
    }
}
void pattern5()
{
    int n;cin>>n;
    int r=n*2-1,l=1;
    forei(i,n,1)
    {
        int c=i;
        fore(j,1,n)
        {
            cout<<c<<" ";
            c+=(j&1?l:r);
        }
        l+=2,r-=2;
        cout<<endl;
    }
}
void pattern4()
{
    int n;cin>>n;
    forei(i,n,1)
    {
        int c=i;
        forei(j,n,1)
        {
            cout<<c<<" ";
            c+=n;
        }
        cout<<endl;
    }
}
void pattern3()
{
    int n;cin>>n;
    int r=n*2-1,l=1;
    fore(i,1,n)
    {
        int c=i;
        fore(j,1,n)
        {
            cout<<c<<" ";
            c+=(j&1?r:l);
        }
        r-=2,l+=2;
        cout<<endl;
    }
}
void pattern2()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<j<<" "<<i<<" ";
        cout<<endl;
    }
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<i<<" "<<j<<" ";
        cout<<endl;
    }
}
void pattern1()
{
    int n;cin>>n;
    fore(i,1,n)
    {
        fore(j,1,n)
            cout<<2*(i+j)-3<<" ";
        cout<<endl;
    }
}
main()
{
    INI pattern14();
}
