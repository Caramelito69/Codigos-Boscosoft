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
void buscar(vector<pair<pair<int,int>,string>>&vec, int k, int i, int s,vector<pair<pair<int,int>,string>>& vec1,vector<pair<vector<pair<pair<int,int>,string>>,bool>>& res)
{
    if (s<=k&&!vec1.empty())
        res.push_back(make_pair(vec1,0));
    fore(j,i,vec.size()-1)
    {
        if (j>i&&vec[j].first.first==vec[j-1].first.first)continue;
        int c=s+vec[j].first.first;
        if (c<=k)
        {
            vec1.push_back(make_pair(make_pair(vec[j].first.first,vec[j].first.second),vec[j].second));
            buscar(vec,k,j+1,c,vec1,res);
            vec1.pop_back();
        }
    }
}
int solve1(string cad)
{
    ll c=0;
    for(char e:cad)
        c+=int(tolower(e)-96);
    return c;
}
void solve()
{
    int n,m;cin>>n>>m;
    vector<pair<pair<int,int>,string>>vec(n);
    for(auto &e:vec)cin>>e.second;
    fore(i,0,n-1)
    {
        int c;cin>>c;
        vec[i].first.first=c,vec[i].first.second=solve1(vec[i].second);
    }
    vector<pair<string,string>>vec1(m);
    for(auto &e:vec1){cin>>e.first>>e.second;}
    int k;cin>>k;
    sort(vec.begin(),vec.end());
    vector<pair<pair<int,int>,string>>vector1;
    vector<pair<vector<pair<pair<int,int>,string>>,bool>>vector2;
    buscar(vec,k,0,0,vector1, vector2);
    fore(i,0,m-1)
    {
        fore(j,0,vector2.size()-1)
        {
            if(vector2[j].second)continue;
            bool b1=0,b2=0;
            fore(k,0,vector2[j].first.size()-1)
            {
                    if(vec1[i].first==vector2[j].first[k].second)b1=1;
                    if(vec1[i].second==vector2[j].first[k].second)b2=1;
            }
                if(b1&&b2)
                    vector2[j].second=true;
        }
    }
    int may=-1;
    for(auto&e:vector2)
    {
        int s=0;
        if(!e.second)
        {
            fore(i,0,e.first.size()-1)
                s+=e.first[i].first.second;
            may=max(s,may);
        }
    }
   cout<<may;
}
main()
{
    INI solve();
}
