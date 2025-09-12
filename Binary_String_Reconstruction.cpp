#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define vecpar vector<int,int>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
        int n0,n1,n2;cin>>n0>>n1>>n2;
        int c=n1-1,c1=n1%2;
        string cad="",cad1="";
        if(!(c&1))
        {
            fore(i,1,c)
            {
                cad+=(i&1?'0':'1');
                if((i&1))cad1="01";
                else cad1="10";
//                cout<<(i&1?"01":"10")<<endl;
            }
        }
        else
        {
            fore(i,1,c)
            {
                cad+=(i&1?'1':'0');
                if((i&1))cad1="10";
                else cad1="01";
//                cout<<(i&1?"10":"01")<<endl;
            }
        }
        fore(i,1,n0)
        {
//            cout<<"00\n";
            cad1="00";
            cad+='0';
        }
        if(n1)
        {
            cad+='0';
            cad1="01";
//            cout<<"01\n";
        }
        fore(i,1,n2)
        {
            cad+='1';
            cad1="11";
//            cout<<"11\n";
        }
        cout<<cad+cad1[1]<<endl;
}
main()
{
    INI query solve();
}
