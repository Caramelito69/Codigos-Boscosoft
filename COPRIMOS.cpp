#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define read1(a) int a;cin>>a;
#define reads(a) string a;cin>>a;
#define read2(a,b) int a,b;cin>>a>>b;
#define read3(a,b,c) int a,b,c; cin>>a>>b>>c;
#define read4(a,b,c,d) int a,b,c,d; cin>>a>>b>>c>>d;
#define query read1(a) while(a--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<pair<int,ii>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) read(a) vi vec(a); for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e;vec) cout<<e<<'  ';cout<<endl;
#define endl ' \n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define auero (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-auero,n))/(sqrt(5))
#define Y cout<<"Yes";
#define N cout<<"No";
typedef long long ll;
const double PI=acos(-1);
main()
{
    read2(a,b)
    while(b>0)
    {
        a=a%b;
        swap(a,b);
    }
    if(a==1)
     Y
    else
     N
}
