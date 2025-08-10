#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int c,d=0;cin>>c;
    string cad;cin>>cad;
    fore(i,0,c-1)
        if(cad[i]==cad[i+1])d++;
    cout<<d<<endl;
}
main()
{
    solve();
}
