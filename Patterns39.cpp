#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define oset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define vvi vector<vi>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define MT make_tuple
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
template<class T> using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T> using pqg=priority_queue<T>;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll inf=numeric_limits<ll>::max();
const ll MOD=1e9+7;
const ld PI=acos(-1);
const int dx[4]{1,0,-1,0},dy[4]{0,1,0,-1};
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
#define DEBUG_ADRI
template<typename  A,typename B>ostream& operator<<(ostream &os,const pair<A,B>&p){return os<<'('<<p.F<<','<<p.S<<')';}
template<typename A>ostream& operator<<(ostream &os,const vector<A>&a)
{
    os<<'{';
    if(a.size()>=1)
    {
        os<<a[0];
        fore(i,1,a.size()-1)
            os<<','<<a[i];
    }
    return os<<'}';
}
template<typename... V>
void funcDebug(string vars,V... v)
{
    cout<<"\033[33m";
    cout<<vars<<" = ";
    string delim="";
    (...,(cout<<delim<<v,delim=','));
    cout<<"\033[33m\n";
}
#ifdef DEBUG_ADRI
    #define deb(x...) funcDebug(#x,x);
    #define LINE cout<<"\033[36m"<<"----DEBUG LINE----"<<"\033[0m"<<endl;
#endif
#ifdef  Adrian
    freeopen("../input.txt","r",stdin);
    freeopen("../output.txt","w",stdout);
#endif
ll randint(ll a,ll b)
{
    return uniform_int_distribution<int>(a,b)(mt_rng);
}
void pattern6()
{
    readi(n)
    forei(j,n,1)
    {
        int i=((n-j+1)&1?1:j),c=((n-j+1)&1?1:-1);
        cout<<i<<' ';
        i+=c;
        while(i<=j && i>=1)
        {
            cout<<i<<' ';
            i+=c;
        }
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    int d=1,c=2;
    fore(i,1,n)
    {
        int m=d;
        if(i&1)
            fore(j,1,i*2-1)
                if(j&1)
                    cout<<m++<<' ';
                else
                    cout<<"* ";
        else
            fore(j,1,i*2-1)
                if(j&1)
                    cout<<m--<<' ';
                else
                    cout<<"* ";
        cout<<endl;
        d+=(i&1?c:1),c+=2;
    }
//    2 6 10 14
}
void pattern4()
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
void pattern3()
{
    readi(n)
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
         fore(j,1,(n/2+1)-abs(i))
            cout<<char((n/2+1)+i+64)<<' ';
         cout<<endl;
//         -2 -1 0 1 2
//         1   2  3 4 5
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
            cout<<i<<"   ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    int d=n*(n+1)-n+1;
    forei(i,n,1)
    {
        fore(j,d,d+i-1)
            cout<<j<<' ';
        cout<<endl;
        d-=(i-1);
    }
//    4->20
//    5->30
//    6->42
}
void solve1()
{
    readi(n)
    int contador=0;
    fore(i,1,n)
    {
        readi3(a,b,c)
        int t=a+b+c;
        if(t>=2)
            contador++;
    }
    cout<<contador;
}
void solve()
{
    int n;
    cin>>n;
    if(n%2==0 and n!=2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
main()
{
    readv(vec,a)
    deb(vec)
//    INI pattern6();
}
