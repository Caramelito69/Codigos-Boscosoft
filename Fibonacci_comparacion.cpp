#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(n) int n;cin>>n;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double dl;
const ll inf=numeric_limits<ll>::max();
const dl PI=acos(-1);
int fibo(int n)
{
    if(n<=1)return n;
    else return fibo(n-1)+fibo(n-2);
}
void solve1()
{
    cout<<fibo(3);
//    0 1 1 2 3 5 8 13
//    0 1 2 3 4 5 6 7
}
int fib[10005];
void solve()
{
    fib[0]=0;
    fib[1]=1;
    readi(n)
    fore(i,2,n)
        fib[i]=fib[i-1]+fib[i-2];
    cout<<fib[n];
//    0 1 1 2 3 5 8 13
//    0 1 2 3 4 5 6 7
}
main()
{
    INI solve();
}
