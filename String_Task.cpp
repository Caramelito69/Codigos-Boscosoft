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
    string cad;cin>>cad;
    string cad1="";
    for(auto &e:cad)
    {
        e=tolower(e);
        if(e!='a'&&e!='e'&&e!='i'&&e!='o'&&e!='u'&&e!='y')
            cad1.push_back(e);
    }
    for(char &e:cad1)
        cout<<'.'<<e;
    cout<<endl;
}
main()
{
    solve();
}
