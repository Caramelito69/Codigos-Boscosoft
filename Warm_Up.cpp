#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve(int cas)
{
    readi(n)
    vi vec1(n),vec2(n);
    map<int,int>verifi;
    map<int,int>aux;
    fore(i,0,vec1.size()-1)
    {
        cin>>vec1[i];
        verifi[vec1[i]]++;
        aux[vec1[i]]=i+1;
    }
    bool ban=0;
    priority_queue<pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>
    >cola;
    fore(i,0,vec2.size()-1)
    {
        cin>>vec2[i];
        if(!verifi[vec2[i]])ban=1;
        if(vec1[i]>vec2[i])ban=1;
        if(vec1[i]!=vec2[i])
            cola.push({vec1[i], {vec2[i], i+1}});
    }
    cout<<"Case #"<<cas<<": ";
    if(ban)
        cout<<"-1\n";
    else
    {
        cout<<cola.size()<<endl;
        while(!cola.empty())
        {
            int v1=cola.top().S.F;
            cout<<aux[v1]<<' '<<cola.top().S.S<<endl;
            cola.pop();
        }
    }
    return;
}
main()
{
    freopen("warm_up_I.txt", "r", stdin);
    freopen("warm_up_O.txt", "w", stdout);
    readi(cas);
    fore(i,1,cas)
        solve(i);
}
