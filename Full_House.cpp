#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern1()
{
    readi(n)
    int m=0;
    forei(i,n,1)
    {
        fore(j,1,i-1)
            cout<<"   ";
        m+=((n-i+1)&1?1:(i+1)*2-2);
        int d=m;
        fore(j,1,n-i+1)
        {
            cout<<(d<10?" ":"")<<d<<' ';
            if((i+j)&1)
                d-=(i*2-1);
            else
                d-=(j*2);
        }
        cout<<endl;
    }
//                            1  2  3  4  5   6
//
//                    6      11
//                    5      2  9
//                    4      7  4  7
//                    3      2  5  6  5
//                    2      3  4  3  8  3
//                    1      2  1  6  1  10  1
//
//                    9
//                2  7
//            5  4  5
//        2  3  6  3
//    1  4  1  8  1
}
void solve()
{
    map<int,int>mapa;
    readi4(a,b,c,d) readi(e)
    mapa[a]++,mapa[b]++,mapa[c]++,mapa[d]++,mapa[e]++;
    if(mapa.size()!=2){cout<<"No\n";return;}
    bool b1=0,b2=0;
    for(auto e:mapa)
    {
        if(e.S==2)b1=1;
        if(e.S==3)b2=1;
    }
    if(b1&&b2){cout<<"Yes\n";return;}
    cout<<"No\n";return;
}
main()
{
    INI solve();
}
