#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define reads(n) string n;cin>>n;
#define readi2(n,m) int n,m;cin>>n>>m;
#define readi3(n,m,x) int n,m,x;cin>>n>>m>>x;
#define readi4(n,m,x,y) int n,m,x,y;cin>>n>>m>>x>>y;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) ()*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    reads(n1)
    reads(k1)
    int n=stoi(n1),k=stoi(k1);
    cin.ignore();
    vector<vii> vecpar(n+1);
    fore(u,1,n)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        if(!a.empty() && a.back()=='\r') a.pop_back();
        if(!b.empty() && b.back()=='\r') b.pop_back();
        vector<int> vec1,vec2;
        if(!a.empty())
        {
            stringstream sa(a);
            int s;
            while(sa>>s) vec1.pb(s);
        }
        if(!b.empty())
        {
            stringstream sb(b);
            int s;
            while(sb>>s) vec2.pb(s);
        }
        int men=min(vec1.size(),vec2.size());
        fore(i,0,men-1)
            vecpar[vec1[i]].pb({u,vec2[i]});
    }
    cout<<n<<" "<<k<<endl;
    fore(i,1,n)
    {
        auto &vec=vecpar[i];
        if(vec.empty())
        {
            cout<<"0\n0\n";
            continue;
        }
        sort(all(vec));
        fore(j,0,vec.size()-1)
        {
            if(j) cout<<" ";
            cout<<vec[j].F;
        }
        cout<<endl;
        fore(j,0,vec.size()-1)
        {
            if(j) cout<<" ";
            cout<<vec[j].S;
        }
        cout<<endl;
    }
}
main()
{
    INI solve();
}
