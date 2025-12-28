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
#define F first
#define S second
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define pb push_back
#define eb emplace_back
#define readv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void pattern6()
{
    readi(n)
    fore(i,1,n/2)
    {
        fore(j,1,n/2)
            cout<<"  ";
        cout<<"* "<<endl;
    }
    fore(i,1,n/2+1)
    {
        fore(j,2,i)
            cout<<"  ";
        fore(j,1,n-((i-1)*2))
            if(j==1|| j==n-((i-1)*2)||j==n/2+2-i)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
        {
            fore(k,1,j)
                cout<<char(k+64)<<' ';
            cout<<endl;
        }
    }
}
void pattern4()
{
    readi(n)
    int d=1;
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i))
            cout<<"  ";
        cout<<char(64+d++)<<' '<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,i+1,n)
            cout<<"  ";
        if(i&1)
            fore(j,1,i)
                cout<<char(j+64)<<"   ";
        else
            fore(j,1,i)
                cout<<j<<"   ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
            if(i==j)
                cout<<i<<' ';
            else
                cout<<"0 ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(a)
    forei(i,a,1)
    {
        fore(j,1,i-1)
            cout<<"  ";
        fore(j,i,a)
            cout<<char(i+64)<<' ';
        cout<<endl;
    }
}
void solve()
{
    readi2(n,k);
    vi vol(n);
    for(auto &e:vol)cin>>e;
    unordered_map<int, priority_queue<int>> t;
    t.reserve(3000000);
    for (int vol:vol)
    {
        int current = vol;
        int steps = 0;
        while (current>=0)
        {
            auto& pq = t[current];
            if (pq.size()<k)
                pq.push(steps);
            else if (!pq.empty() && pq.top()>steps)
            {
                pq.pop();
                pq.push(steps);
            }
            if (current==0) break;
            current/=2,steps++;
        }
    }
    int ans=inf;
    for (auto& [value,pq]:t)
    {
        if (pq.size()<k) continue;
        int total=0;
        while (!pq.empty())
        {
            total += pq.top();
            pq.pop();
        }
        if (total<ans)
            ans=total;
    }
    cout<<ans<<endl;
}
main()
{
    INI pattern6();
}
