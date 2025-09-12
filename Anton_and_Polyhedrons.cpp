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
    int c=0;
    query{
        string cad;cin>>cad;
        switch(cad[0])
        {
            case 'T':c+=4;break;
            case 'C':c+=6;break;
            case 'O':c+=8;break;
            case 'D':c+=12;break;
            case 'I':c+=20;break;
        }
    }
    cout<<c;
}
main()
{
    INI solve();
}
