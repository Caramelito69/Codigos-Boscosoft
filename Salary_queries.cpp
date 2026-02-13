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
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
const int tam=2e5+5;
int arr[tam];
void update(int pos,int val)
{
    while(pos<tam)
    {
        arr[pos]+=val;
        pos+=(pos&-pos);
    }
}
int query(int pos)
{
    int r=0;
    while(pos>0)
    {
        r+=arr[pos];
        pos-=(pos&-pos);
    }
    return r;
}
void solve()
{
    readi2(n,q)
    vi vec(n+1);
    fore(i,1,n)
    {
        cin>>vec[i];
        update(i,vec[i]);
    }
    while(q--)
    {
        readi3(a,b,c)
        if(a==1)
        {
            update(b,c-vec[b]);
            vec[b]=c;
        }
        else
        {
            cout<<query(c)-query(b-1)<<endl;
        }
    }
//    fore(i,0,20)
//        cout<<(arr[i]<10?" ":"")<<arr[i]<<' ';
//    cout<<endl;
//    fore(i,1,21)
//        cout<<(i<10?" ":"")<<i<<' ';
}
main()
{
    INI solve();
}
