#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    vector<pair<int,pair<int,ll>>>vec;
    while(m--)
    {
        int a,b,c;cin>>a>>b>>c;
        int may=max(a,b),men=min(a,b);
        vec.push_back(make_pair(men,make_pair(may,c)));
    }
    sort(all(vec));
    int con=0;
    for(int i=0;i<vec.size();)
    {
        if(i==vec.size()-1)
        {
            con+=vec[i].second.second;
            break;
        }
        else if(vec[i].first==vec[i+1].first && vec[i].second.first==vec[i+1].second.first)
            con+=min(vec[i].second.second,vec[i+1].second.second),i+=2;
        else
             con+=vec[i].second.second,i++;
    }
    cout<<con;
}
void solve1()
{
   int n, c, a, b, w;cin>>n>>c;
    map<pair<int,int>,int> par;
    while(c--){
        cin>>a>>b>>w;
        if(par[{min(a,b),max(a,b)}]==0)par[{min(a,b),max(a,b)}]=1e9;
        par[{min(a,b),max(a,b)}]=min(w,par[{min(a,b),max(a,b)}]);
    }
    c=0;
    for(auto &i:par) c+=i.second;
    cout<<c;
}
void solve2()
{
    int n,m;cin>>n>>m;
    vector<pair<int,int>>vec;
    while(m--)
    {
        int a,b;cin>>a>>b;
        vec.emplace_back(a,b);
    }
    sort(all(vec),[](auto &a,auto &b)
         {
             return a.second<b.second;
         });
        for(auto e:vec)
            cout<<e.first<<" "<<e.second<<endl;
}
main()
{
    INI solve2();
}

//5 6
//1 2 5
//2 3 6
//3 1 7
//1 4 8
//3 5 2
//2 1 3
