#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
        string cad;cin>>cad;
        string cad1="";
        bool h,e,o;int l=0;
        h=e=o=0;
        cad.push_back(cad[cad.size()-1]);
        fore(i,0,cad.size()-1)
        {
            if(cad[i]=='h')h=1;
            else if(cad[i]=='e'&&h)e=1;
            else if(cad[i]=='l'&&e)l++;
            else if(cad[i]=='o'&&l>=2){cout<<"YES\n";return;}
        }
        cout<<"NO\n";
}
main()
{
    INI solve();
}
