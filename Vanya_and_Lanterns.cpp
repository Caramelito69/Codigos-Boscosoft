#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int ll
#define ii pair<ll,ll>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(vec,a) vi vec(a);for(int &e:vec)cin>>e;
#define printv(vec) for(int &e:vec)cout<<e<<' ';cout<<endl;
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int a,b;cin>>a>>b;
    set<ll>seti;
    bool ini=0,fin=0;
    fore(i,1,a)
    {
        int n;cin>>n;
        if(n==0)ini=1;
        if(n==b)fin=1;
        seti.insert(n);
    }
    auto it1=seti.begin();
    vector<double>vec;
    for(auto ite=++seti.begin();ite!=seti.end();ite++,it1++)
    {
        double r=*ite,l=*it1;
        int d= r-l ;
        double res=(double(*it1+*ite)/2)-(*it1);
        vec.eb(res);
    }
    double may=-1;
    if(!ini)
        may=max(may, double(*seti.begin()) - 0);
    if(!fin)
        may=max(may,b-double(*(--seti.end())));
    for(auto e:vec)
        may=max(may,e);
    cout<<fixed<<setprecision(10)<<may;
//    cout<<l<<" "<<r;
//7 15
//15 5 3 7 9 14 0

}
main()
{
    INI solve();
}
