#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define Q readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define PB push_back
#define SZ size
#define EB emplace_back
#define MP make_pair
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
struct BIT
{
    int n;
    vi tree;
    BIT(int n):n(n),tree(n+1,0){}
    BIT(vi &a):n(a.SZ()),tree(n+1,0)
    {
        fore(i,1,n)
        {
            tree[i]+=a[i-1];
            int j=i+(i&-i);
            if (j<=n)tree[j]+=tree[i];
        }
    }
    void print()
    {
        for(auto e:tree)
            cout<<e<<' ';
    }
    void update(int i, int val)
    {
        for (i++;i<=n;i+=i&-i)tree[i]+=val;
    }
    int query(int i)
    {
        int res = 0;
        for (i++; i>0;i-=i&-i) res+=tree[i];
        return res;
    }
    int query(int l, int r)
    {
        return (l>r)?0:query(r)-query(l-1);
    }
};
void solve1()
{
    readv(vec,a);
    BIT vec1(vec);
    vec1.print();
}
void solve()
{
    readi2(n,c)
    vi vec(n);
    for(auto &e:vec)cin>>e;
    BIT vec1(vec);
    while(c--)
    {
        readi3(op,a,b)
        if(op==1)
        {
            int d=b-vec[a-1];
            vec1.update(a-1,d);
            vec[a-1]=b;
        }
        else
            cout<<vec1.query(a-1,b-1)<<endl;
    }
}
main()
{
    INI solve1();
}
