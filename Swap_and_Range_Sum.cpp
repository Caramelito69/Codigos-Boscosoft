#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
struct FenwickTree
{
    int n;
    vi tree;
    FenwickTree(int n) : n(n),tree(n+1,0){}
    void add(int i,int d)
    {
        while(i<=n)
            tree[i]+=d,i+=i&-i;
    }
    ll query(int i)
    {
        ll sum=0;
        while(i>0)
            sum+=tree[i],i-=i&-i;
        return sum;
    }
    ll query(int l, int r)
    {
        return query(r)-query(l-1);
    }
};
void solve()
{
    readi2(n,q)
    vi a(n+1);
    FenwickTree bit(n);
    fore(i,1,n)
    {
        cin>>a[i];
        bit.add(i,a[i]);
    }
    fore(k,1,q)
    {
        readi(t)
        if(t==1)
        {
            readi(x)
            int v1=a[x];
            int v2=a[x+1];
            bit.add(x,v2-v1);
            bit.add(x+1,v1-v2);
            swap(a[x],a[x+1]);
        }
        else
        {
            readi2(l,r)
            cout<<bit.query(l,r)<<endl;
        }
    }
}
main()
{
    INI solve();
}
