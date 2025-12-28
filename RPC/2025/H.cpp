#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(vec) begin(vec),end(vec)
#define rall(vec) rbegin(vec),rend(vec)
#define F first
#define S second
#define pb push_back
#define emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
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
void solve1()
{
    readi(n)
    priority_queue<int>cola;
    map<int,int>mapa;
    fore(i,1,n*10)
    {
        vi vec(5);
        if(i>1)
        {
            for(auto &e:vec)
            {
                cin>>e;
                if(mapa[e]>=2*n)
                    cola.push(-e);
            }
            mapa.clear();
            for(auto e:vec)
                mapa[e]++;
        }
        else
        {
            for(auto &e:vec)
            {
                cin>>e;
                mapa[e]++;
            }
        }
    }
    while(!cola.empty())
    {
        cout<<-cola.top()<<' ';
        cola.pop();
    }
}
void solve()
{
    readi(n)
    map<int,int>mapa;
    fore(j,1,n*10*5)
        {
                readi(a)
                mapa[a]++;
        }
    vi vec;
    for(auto e:mapa)
        if(e.S>2*n)
            vec.pb(e.F);
    if(vec.empty())
        cout<<-1;
    else
    {
        cout<<vec[0];
        fore(i,1,vec.size()-1)
            cout<<' '<<vec[i];
    }
    cout<<endl;
}
main()
{
    INI solve();
}
