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
    int a;cin>>a;vector<int>vec(a+1),vec1(a+1);
    fore(i,0,a-1)cin>>vec[i];
    fore(i,0,a-1)cin>>vec1[i];
    int s=0;
    fore(i,0,a-1)
        if(vec[i]>vec1[i])
            s+=(vec[i]-vec1[i]);
    cout<<s+1<<endl;
}
main()
{
    INI query solve();
}
