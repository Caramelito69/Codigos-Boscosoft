#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int long long
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(n)  for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) ((n)*(n+1)/2)
#define aureo (1+sqrt(5))/2
#define fibo(n) ((pow(aureo,n)-pow(1-aureo,n))/(sqrt(5)))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern11()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,i)
            cout<<i<<" ";
        fore(j,i+1,n)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern10()
{
    readi(n)
    int d=1;
    fore(i,1,n)
    {
        if(i&1)
            fore(j,d,d+n-1)
                cout<<j<<" ";
        else
            forei(j,d,d-n+1)
                cout<<j<<" ";
        d+=(i&1?n*2-1:1);
        cout<<endl;
    }
}
void pattern9()
{
    readi(n)
    int d=n/2;
    bool ban=0;
    forei(i,d,-d)
    {
        if(ban)
        {
            fore(j,d-abs(i)+2,n)
                cout<<"# ";
            fore(j,1,d-abs(i)+1)
                cout<<"* ";
        }
        else
        {
            fore(j,1,d-abs(i)+1)
                cout<<"* ";
            fore(j,d-abs(i)+2,n)
                cout<<"# ";
        }
        ban^=1;
        cout<<endl;
        if(i==-d+1)
            if(!(n&1))
                break;
    }
}
void pattern8()
{
    readi(n)
    n/=2;
    int d=1;
    forei(i,n,-n)
    {
        fore(j,1,n-abs(i)+1)
            cout<<char(64+d)<<" ";
        cout<<endl;
        d++;
    }
}
void pattern7()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n-i+1)
            cout<<"  ";
        forei(j,i,1)
            cout<<i<<" ";
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,n*2-1)
        {
            if(j==i||j==i+((n-i)*2))
                cout<<char(j+64)<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
            cout<<"  ";
        fore(j,1,i)
            if(i&1)
                cout<<char(i+64)<<"   ";
            else
                cout<<i<<"   ";
        cout<<endl;
    }
}
void pattern4()
{
    readi(n)
    n/=2;
    int d=1;
    forei(i,n,-n)
    {
        fore(j,1,n-abs(i)+1)
            cout<<d++<<"  ";
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    fore(i,1,n)
    {
        if(i&1)
            fore(j,1,n)
                cout<<j<<" ";
        else
            forei(j,n,1)
                cout<<j<<" ";
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
        fore(j,1,i)
            cout<<j<<" ";
        forei(j,i-1,1)
            cout<<j<<" ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    int d=1;
    forei(i,n-1,0)
    {
        fore(j,i,n-1)
            cout<<"   ";
        fore(j,d,i+d)
            cout<<j<<"  ";
        d+=i;
        cout<<endl;
    }
}
void solve()
{
    readi(n)
    readi(k)
    vi vec(n);
    vi prefix(n+1);
    vi suffix(n+1);
    prefix[0]=inf;
    fore(i,0,n-1)
    {
        cin>>vec[i];
        prefix[i+1]=min(vec[i],prefix[i]);
    }
    suffix[n]=inf;
    forei(i,n-1,0)
        suffix[i]=min(vec[i],suffix[i+1]);
    vi windows(n);
    multiset<int>values;
    #define cuenta(i) (vec[i]+(i))
    int r=0;
    fore(i,0,n-1)
    {
        int worstLeft=inf;
        if(i-k>=0)
        {
            values.erase(cuenta(i-k));
            worstLeft=prefix[i-k+1];
        }
        values.insert(cuenta(i));
        int worstMid=*values.begin()+k-i;
        int worstRight=suffix[i+1];
        int option=min(worstMid,min(worstLeft,worstRight));
        r=max(r,option);
    }
    cout<<r;
}
void solve1()
{
    multiset<int>seti;
    seti.insert(3);
    seti.insert(3);
    seti.insert(4);
    seti.insert(5);
    for(auto e:seti)
        cout<<e<<" ";
    cout<<endl;
    cout<<*seti.find(8);
    cout<<endl;
    dbg(*seti.end());
}
main()
{
    INI pattern9();
}
