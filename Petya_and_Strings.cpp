#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string a,b;cin>>a>>b;
    for(auto &e:a)e=toupper(e);
    for(auto &e:b)e=toupper(e);
    if(a==b)
        cout<<0;
    else if(lexicographical_compare(all(a),all(b)))
        cout<<-1;
    else
        cout<<1;
    cout<<endl;
}
main()
{
    solve();
}
