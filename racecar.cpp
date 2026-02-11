#include<bits/stdc++.h>
using namespace std;
#define readi(a) int a;cin>>a;
#define vi vector<int>
#define readv(vec,n) readi(n) vi vec(n);for(auto &e:vec)cin>>e;
#define print(vec) for(auto e:vec)cout<<e<<' ';cout<<endl;
#define query readi(n) while(n--)
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
void uwu()
{
    readi(n);
    vector<string>s(n);
    for(auto&x:s)cin>>x;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)if(i!=j)
            {
                string t=s[i]+s[j],r=t;
                reverse(r.begin(),r.end());
                if(t==r)
                {
                    cout<<"Yes"<<endl;
                    return;
                }
            }
    cout<<"No"<<endl;
}
int main()
{
    INI;
    uwu();
}
