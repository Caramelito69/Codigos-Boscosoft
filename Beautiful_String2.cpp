#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(a) while(a--)
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
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto &e:vec)cout<<e<<' ';cout<<endl;
#define pb push_back
#define eb emplace_back
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
    readi(n)
    reads(s)
    for (int mask = 0; mask < (1 << n);mask++)
    {
        string x = "";
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i))
                x+=s[i];
        bool ban=1;
        for (int k=0;k<x.size()/2;k++)
            if (x[k]!=x[x.size()-1-k])
                {ban=0;break;}
        if (!ban) continue;
        string p = "";
        vector<ll> vec;
        bool ban1=1;
        bool saw_one = 0;
        for (int i = 0; i < n; ++i)
        {
            if (!(mask & (1 << i)))
            {
                char current_char = s[i];
                p+=current_char;
                vec.pb(i+1);
                if (current_char == '1')
                    saw_one = 1;
                else if (current_char == '0' && saw_one)
                    {ban1 = 0;break;}
            }
        }
        if (ban1)
        {
            cout << vec.size()<<endl;
            printv(vec)
            return;
        }
    }
    cout << -1 << endl;return;
}
main()
{
    INI query solve();
}
