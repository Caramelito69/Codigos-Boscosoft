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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
bool arr[10001];
void solve()
{
    string cad;getline(cin,cad);
    string cad1;cin>>cad1;
    int tam=cad1.size();
    string rev=cad1;
    reverse(all(rev));
    fore(i,0,cad.size()-1)
    {
        int e=cad.find(cad1);
        if(e!=string::npos)
        {
            cad.replace(e,tam,rev);
            i=e+tam-1;
        }
    }
    cout<<cad;
}
main()
{
    INI solve();
}
