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
    vi vec(n);
    bool ini=0,fin=0;
    fore(i,0,n-1)
    {
        cin>>vec[i];
        if(i==0&&vec[i]==-1)ini=1;
        if(i==n-1&&vec[i]==-1)fin=1;
        if(vec[i]==-1)vec[i]=0;
    }
    int sum=0;
    fore(i,0,n-2)
        sum+=(vec[i+1]-vec[i]);
    sum=abs(sum);
    if(ini||fin)
    {
        cout<<0<<endl;
        if(fin)
            vec[n-1]=sum;
        else if(ini)
            vec[0]=sum;
        for(auto e:vec)
            cout<<e<<' ';
    }
    else
    {
        cout<<sum<<endl;
        for(auto e:vec)
            cout<<e<<' ';
    }
    cout<<endl;
//    for(auto e:vec)
//        cout<<e<<' ';
//6
//-1 3 5 8 0 6
}
main()
{
    INI query solve();
}
