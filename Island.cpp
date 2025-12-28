#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
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
const int max_n=1004,max_m=1004;
int cont,parent[max_n];
int root(int x)
{
    if(parent[x]==x)
        return x;
    return parent[x]=root(parent[x]);
}
void join(int x,int y)
{
    int a=root(x);
    int b=root(y);
    if(a!=b)
        parent[a]=b,cont--;
}
struct Cell
{
    int x,y,h;
    bool operator<(const Cell &o) const {return h<o.h;}
};
int mat[max_n][max_n];
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
void solve()
{
        readi2(n,m)
        vector<Cell>cells;
        cells.reserve(n*m);
        fore(i,0,n-1)
            fore(j,0,m-1)
            {
                cin>>mat[i][j];
                cells.pb({i,j,mat[i][j]});
            }
        cont=0;
        fore(i,0,n*m)
            parent[i]=i;
        sort(all(cells));
        readv(queries,t)
        vi ret(t);
        forei(i,t-1,0)
        {
            int h=queries[i];
            while(!cells.empty() && cells.back().h>h)
            {
                Cell c=cells.back(); cells .pop_back();
                cont++;
                fore(j,0,3)
                {
                    int nx=c.x+dx[j];
                    int ny=c.y+dy[j];
                    if(0<=nx&&nx<n&&
                       0<=ny&&ny<m&&
                       mat[nx][ny]>h)
                    {
                        #define ID(x,y) ((x)*m+(y))
                        join(ID(nx,ny),ID(c.x,c.y));
                    }
                }
            }
            ret[i]=cont;
        }
        fore(i,0,t-1)
        {
            if(i>0)
                cout<<' ';
            cout<<ret[i];
        }
        cout<<endl;
}
main()
{
    INI solve();
}
