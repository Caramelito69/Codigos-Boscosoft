#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vecpar vector<pair<int,ll>>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
vector<int>vec;
int buscar(int a)
{
    if(vec[a]==a)return a;
    return vec[a]=buscar(vec[a]);
}
void solve()
{
    int n,m;cin>>n>>m;
    vec.resize(n+1);
    fore(i,1,n)vec[i]=i;
    priority_queue<pair<ll, pair<int, int>>,vector<pair<ll, pair<int, int>>>,greater<pair<ll, pair<int, int>>>>cola;
    while(m--)
    {
        int a,b;ll c;cin>>a>>b>>c;
        cola.push({c,{a,b}});
    }
    ll cont=0;
    while(!cola.empty())
    {
        ll c=cola.top().first,a=cola.top().second.first,b=cola.top().second.second;
        int padrea=buscar(a),padreb=buscar(b);
        if(padrea!=padreb)
            vec[padrea]=padreb,cont+=c;
        cola.pop();
    }
    int cont2=0;
    fore(i,1,n)
        if(vec[i]==i)cont2++;
    if(cont2==1)
        cout<<cont;
    else
        cout<<"IMPOSSIBLE";
}
main()
{
    INI solve();
}
