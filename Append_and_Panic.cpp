#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
using namespace std;
void solve()
{
    string cad;
    cin>>cad;
    unordered_set<char>seti;
    for(char e:cad)
    {
        seti.insert(e);
    }
    cout<<cad.size()-seti.size();
}
main()
{
    INI solve();
}
