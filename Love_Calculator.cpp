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
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
int desc(int s)
{
    int c=0;
    while(s)
        c+=s%10,s/=10;
    return c;
}
int cal(string cad)
{
    int s=0,c=0;
    for(char e:cad)
    {
        int r=tolower(e)-'a'+1;
        if(r>0&&r<27)
            s+=r;
    }
    return desc(desc(desc(s)));
}
void solve()
{
    string cad,cad1;cin>>cad>>cad1;
    int r=cal(cad),r1=cal(cad1);
    cout<<fixed<<setprecision(2)<<(100-float(float(float(r-r1)/r)*100))<<" %";
}
main()
{
    INI solve();
}
