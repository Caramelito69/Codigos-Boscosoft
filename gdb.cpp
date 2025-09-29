#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query readi(n) while(n--)
typedef long long ll;
typedef unsigned long long ull;
void f(const vector<int>&vec)
{
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]+vec[i+1]<<endl;
}
void solve()
{
    vector<int>v(2);
    v[0]=3,v[1]=5;
    f(v);
}
main()
{
    INI solve();
}
