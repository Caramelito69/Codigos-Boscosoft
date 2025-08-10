#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n,s=0;cin>>n;
    vector<int>vec(n);
    for(int &elem:vec)
    {
        cin>>elem;
        s+=elem+(elem==0);
    }
    cout<<s<<endl;
}
main()
{
    INI query solve();
}
