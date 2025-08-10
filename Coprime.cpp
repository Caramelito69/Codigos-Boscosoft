#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
vector<int>vec[1001];
void solve()
{
    int n;cin>>n;
    vector<int>veri(1001,0);
    fore(i,1,n)
        {int x;cin>>x;veri[x]=i;}
    int s=-1;
    fore(i,1,1000)
    {
        if(!veri[i])continue;
        for(int j:vec[i])
            if(!veri[j])continue;
            else s=max(s,veri[i]+veri[j]);
    }
    cout<<s<<endl;
}
main()
{
    fore(i,1,1000)
        fore(j,1,1000)
            if(gcd(i,j)==1)
                vec[i].emplace_back(j);
    INI query solve();
}
