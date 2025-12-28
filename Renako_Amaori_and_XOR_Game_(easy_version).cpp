#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi(n)
    vector<int> a(n), b(n);
    for(int &e:a)cin>>e;
    for(int &e:b)cin>>e;
    int c = 0,d=-1;
    fore(i,0,n-1)
        if (a[i]!=b[i])
            c++,d=i;
    if (c%2==0)
        cout<<"Tie"<<endl;
    else
    {
        if (d&1)
            cout<<"Mai"<<endl;
        else
            cout<<"Ajisai"<<endl;
    }
}
main()
{
    INI query solve();
}
