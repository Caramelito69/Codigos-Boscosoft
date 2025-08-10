#include<bits/stdc++.h>
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define INI cin.tie(0)->sync_with_stdio(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int tam=999984;
vector<ll>primos;
vector<bool>esprimo;
void criba()
{
    esprimo.assign(tam/2,1);
    esprimo[0]=0;
    for(ll i=3;i*i<tam;i+=2)
        if(esprimo[i/2])
            for(ll j=i*i;j<tam;j+=2*i)
                esprimo[j/2]=0;
    primos={4};
    for(ll i=3;i<tam;i+=2)
        if(esprimo[i/2])
        {
            if(i*i>1e12)break;
            primos.push_back(i*i);
        }
}
void solve()
{
    ll n;cin>>n;
    if(binary_search(all(primos),ll(n)))
        cout<<"YES\n";
    else cout<<"NO\n";
}
main()
{
    criba();
    INI query solve();
}
