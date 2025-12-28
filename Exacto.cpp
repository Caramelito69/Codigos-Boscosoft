#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readv(vec,a)
    map<int,int>mapa;
    readi4(b,c,d,e)
    readi(f)
    fore(i,0,a-1)
        fore(j,i+1,a-1)
            mapa[abs(vec[i]-vec[j])]++;
    for(auto e:mapa)
        cout<<e.F<<':'<<e.S<<endl;
    vi vec1(5);
    vec1[0]=mapa[b],vec1[1]=mapa[c],vec1[2]=mapa[d],vec1[3]=mapa[e],vec1[4]=mapa[f];
    int may=0;
    for(auto e:vec1)
        may=max(may,e);
    bool ban=1;
    fore(i,0,4)
    {
        if(vec1[i]==may)
        {
            if(!ban)
                cout<<endl;
            cout<<(i+1)<<" : "<<may;
            ban=0;
        }
    }
    cout<<endl<<endl;
}
main()
{
    INI solve();
}
