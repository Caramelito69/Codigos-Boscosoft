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
    for(int i=0;i<=n;i++)
    {
        int a=-1;
        for(int j=1;j<=9;j++)
            if(n%j==0&&i%(n/j)==0)
            {
                a=j;
                break;
            }
        if(a!=-1)cout<<a;
        else cout<<'-';
    }
    cout<<endl;
}
int main()
{
    INI;
    uwu();
}
