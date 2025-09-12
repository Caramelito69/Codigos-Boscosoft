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
    vector<int>vec(27,0),vec1(27,0);
    string cad,cad1,bus;cin>>cad>>cad1>>bus;
    for(int e:cad)
        vec[e-64]++;
    for(int e:cad1)
        vec[e-64]++;
    for(int e:bus)
        vec1[e-64]++;
    fore(i,1,26)
        if(vec[i]!=vec1[i])
        {
            cout<<"NO";return;
        }
    cout<<"YES";return;
}
main()
{
    INI solve();
}
