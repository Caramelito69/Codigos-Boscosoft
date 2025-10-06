#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define reads(n) string n;cin>>n;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ii pair <ll,ll>
#define vi vector<int>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n';
#define dbg(v) cout<<#v<<' '<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi(n)
    vi vec(n+1);
    fore(i,0,n-1)
    {
        readi(a)
        vec[a]=i;
    }
    int may=0,l=0;
    fore(i,1,n-1)
        if(vec[i]<vec[i+1])
            l++;
        else
            may=max(may,l),l=0;
    may=max(may,l);
    int lmay=max(ll(1),may+1);
    cout<<n-lmay<<endl;
}
main()
{
    INI solve();
}
