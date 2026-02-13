#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(n,m);
    map<int,int>vec;
    fore(i,1,n)
    {
        readi2(l,t);
        vec[l-m]++;
        vec[l+t+1]--;
    }
    int c=0,cur=0;
    for(auto p:vec)
        cur+=p.S,c=max(c,cur);
    cout<<c<<"\n";
}
void busqueda_bin()
{
    readi(a)
    vi vec(a);
    for(auto &e:vec)cin>>e;
    readi(bus) //Elemento q se busca
    int l=0,r=a-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(vec[mid]==bus){cout<<"Encontrado\n";return;}
        else if(vec[mid]>bus)r=mid-1;
        else l=mid+1;
    }
    cout<<"No encontrado\n";
}
main()
{
    INI busqueda_bin();
}
