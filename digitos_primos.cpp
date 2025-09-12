#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<"="<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n,cont=0;cin>>n;vector<int>vec(n);
    for(int &e:vec)
    {
        cin>>e;
        int c=e;
        while(c)
        {
             if((c%10)==2||(c%10)==3||(c%10)==5||(c%10)==7)
                cont++;
            c/=10;
        }
    }
    cout<<cont;
}
main()
{
    INI solve();
}

