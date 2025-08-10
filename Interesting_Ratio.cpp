#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int M=1e7+1;
vector<int>primos;
vector<bool> esprimo;
void sieve()
{
    esprimo.assign(M/2,true);
    esprimo[0]=false;
    for (int i=3; i*i<M;i+=2)
        if (esprimo[i/2])
            for (int j=i*i;j<M;j+=2*i)
                esprimo[j/2]=false;
    primos={2};
    for (int i = 3;i<M;i+=2)
        if (esprimo[i/2]) primos.push_back(i);
}
void solve()
{
    for(int elem:primos)
        cout<<elem<<" ";
//    int n;
//    cin>>n;
//    ll ans=0;
//    for (int p:primos)
//    {
//        if (p>n) break;
//        ans+=n/p;
//    }
//    cout<<ans<<'\n';
}
int main()
{
    sieve();
    INI query solve();
}
