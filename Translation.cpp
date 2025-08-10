#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad1,cad2;cin>>cad1>>cad2;
    if(cad1.size()!=cad2.size()){cout<<"NO\n";return;}
    fore(i,0,cad1.size()-1)
        if(cad1[i]!=cad2[cad2.size()-i-1])
            {cout<<"NO\n";return;}
    cout<<"YES\n";return;
}
main()
{
    INI solve();
}

