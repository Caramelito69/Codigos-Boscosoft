#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define oset tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define readv(vec,n) readi(n)  vi vec(n);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define PB push_back
#define EB emplace_back
#define F first
#define S second
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
template<class T>using pql=priority_queue<T,vector<T>,greater<T>>;
template<class T>using pqg=priority_queue<T>;
typedef long long ll;
typedef double long dl;
int main()
{
    int a;
    cin>>a;
    char uwu=65+a-1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++){
            if(i+j<=a+1)
                cout<<uwu<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
        uwu--;
    }

}

