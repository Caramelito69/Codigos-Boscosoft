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
    int n,may=-1;cin>>n;vector<int>vec(n);
    for(int &e:vec){cin>>e;may=max(may,e);}
    int d=(4*n+1);
    forei(i,may+1 ,0)
    {
        fore(j,1,d)
        {
            if(0==i)
            {
                if((j-3)%4==0)cout<<'|';
                else cout<<'_';
            }
            else if((j-3)%4==0 && vec[(j-3)/4]+1==i)
                cout<<'^';
            else if((j-2)%4==0 && vec[(j-2)/4]>=i)
            {
                cout<<"/|\\";
                j+=2;
            }
            else
                cout<<'.';
        }
        cout<<endl;
    }
}
main()
{
    INI solve();
}
