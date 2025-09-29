#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int long long
#define readi(n) int n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<int>
#define vs vector<string>
#define ii pair<ll,ll>
#define vii vector<ii>
#define viii vector<ll,ii>
#define F first
#define S second
#define reads(n) string n;cin>>n;
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
#define dbg(n) cout<<#n<<'='<<n<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    vector<int>vec(3);
   fore(i,1,3)
    {
        char a;cin>>a;
        vec[ll(a)-97]=abs(ll(a)-97+1-i);
    }
    if((vec[0]<=1&&vec[1]<=1&&vec[2]<=1)||(vec[0]==2&&vec[1]==2&&vec[2]!=2)||(vec[0]!=2&&vec[1]==2&&vec[2]==2)||(vec[0]==2&&vec[1]!=2&&vec[2]==2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
main()
{
    INI query solve();
}
