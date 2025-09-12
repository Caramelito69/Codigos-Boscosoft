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
    char cad[n];
    map<char,bool>mapa;
    bool ban=0;
    fore(i,0,n-1)
    {
        cin>>cad[i];
        mapa[cad[i]]=1;
    }
    if(mapa['W']&&!mapa['R']&&!mapa['B'])
    {
        cout<<"YES\n";
        return;
    }
    if(!mapa['B']||!mapa['R'])
    {
        cout<<"NO\n";
        return;
    }
    mapa['R']=0,mapa['B']=0;
    fore(i,0,n-1)
    {
        if(cad[i]!='W')
            mapa[cad[i]]=1;
        if((i==n-1||cad[i]=='W'))
        {
            if((!mapa['R'] &&!mapa['B'])||(mapa['R']&&mapa['B']))
                mapa['R']=0,mapa['B']=0;
            else
                ban=1;
        }
    }
    if(ban)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;
}
main()
{
    INI  query solve();
}
