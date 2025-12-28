#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a) int a,b;cin>>a>>b;
#define readi3(a) int a,b,c;cin>>a>>b>>c;
#define readi4(a) int a,b,c,d;cin>>a>>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(n) vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,k;cin>>n>>k;
    int men=(k/3)+bool(k%3);
    int may=(k/2)+bool(k%2);
    if(n>=men && n<=may)
    {
        while(n!=0)
        {
            if(k==1)
            {
                cout<<'X';
                n--,k--;
            }
            else if(k/3<n)
            {
                cout<<"X-";
                n--,k-=2;
            }
            else if(k%n==0)
            {
                cout<<"-X-";
                n--,k-=3;
            }
        }
    }
    else
        cout<<"*";
}
main()
{
    INI solve();
}
