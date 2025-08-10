#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;cin>>cad;int may=0;
    for(int e:cad)if(e<97)may++;
    if(cad.size()-may>=may)for(char e:cad)cout<<char(tolower(e));
    else for(char e:cad)cout<<char(toupper(e));
    cout<<endl;
}
main()
{
    solve();
}
