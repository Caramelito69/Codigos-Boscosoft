#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n;
    cin>>n;
    vector<string> s(n);
    vector<int>mapa1(11,0);
    vector<int>mapa2(11,0);
    vector<vector<int>> contador(11,vector<int>(11,0));
    fore(i,0,n-1)
    {
        cin>>s[i];
        int arr1=s[i][0]-'a';
        int arr2=s[i][1]-'a';
        mapa1[arr1]++;
        mapa2[arr2]++;
        contador[arr1][arr2]++;
    }
    ll t=0;
    fore(i,0,n-1)
    {
        int arr1=s[i][0]-'a';
        int arr2=s[i][1]-'a';
        ll par1=(ll)mapa1[arr1]-contador[arr1][arr2];
        ll par2=(ll)mapa2[arr2]-contador[arr1][arr2];
        t+=par1+par2;
    }
    cout<<t/2<<endl;
}
main()
{
    INI query solve();
}
