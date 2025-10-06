#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define readi(n) int n;cin>>n;
#define reads(n) string n;cin>>n;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n)/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,s;
    while(cin>>n>>s)
    {
        vi vec(n);
        for(auto &e:vec)cin>>e;
        int ini=0,suma=0,i=0;
        bool b=0;
        while(i<n)
        {
            if(suma<s)suma+=vec[i++];
            if(suma==s)
                {cout<<ini+1<<' '<<i<<endl;b=1;break;}
            if(suma>s)
            {
                suma-=vec[ini++];
                if(suma==s)
                    {cout<<ini+1<<' '<<i<<endl;b=1;break;}
            }
        }
        if(!b)cout<<-1<<endl;
    }
}
main()
{
    solve();
}
