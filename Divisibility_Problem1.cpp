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
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
vector<int>vec={2,12,112,2112,22112,122112,2122112,12122112,212122112
,1212122112
,11212122112
,111212122112
,1111212122112
,11111212122112
,211111212122112
,1211111212122112
,11211111212122112
,111211111212122112};
void solve()
{
    readi(a)
    cout<<vec[a-1];
}
main()
{
    INI solve();
}
