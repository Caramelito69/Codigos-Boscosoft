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
    int n;
    cin>>n;
    vector<int>vec(n);
    int d;
    bool ban=0;
    set<int>seti;
    for(int &e:vec)
    {
        cin>>e;
        if(e!=-1)seti.insert(e);
        if(e!=-1 && !ban)d=e,ban=1;
    }
    if(seti.size()==1&& *seti.begin()==0)
    {
        cout<<"NO\n";
        return;
    }
    fore(i,0,n-1)
    {
        if(vec[i]==-1)continue;
        if(vec[i]!=d)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}
main()
{
    INI query solve();
}
