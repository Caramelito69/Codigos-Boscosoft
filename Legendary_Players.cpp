#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define endl '\n'
#define ii pair<int,int>
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    string c;cin>>c;
    map<string,string>ratings={
        {"tourist", "3858"},
        {"ksun48", "3679"},
        {"Um_nik", "3648"},
        {"apiad", "3638"},
        {"Stonefeang", "3630"},
        {"ecnerwala", "3613"},
        {"mnbvmar", "3555"},
        {"newbiedmy", "3516"},
        {"semiexp", "3481"},
        {"Benq", "3658"}
    };
    if (ratings.count(c))
        cout<<ratings[c];
}
main()
{
    INI solve();
}
