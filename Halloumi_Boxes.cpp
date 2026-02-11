#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define F first
#define S second
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define PB push_back
#define EB emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const dl PI=acos(-1);
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi2(n,k)
    vi vec(n);
    for(int &e:vec)
        cin>>e;
    if(k>1)
        cout<<"YES\n";
    else
    {
        fore(i,0,n-2)
            if(vec[i]>vec[i+1])
            {
                cout<<"NO\n";
                return;
            }
        cout<<"YES\n";
    }
}
main()
{
    INI query solve();
}
