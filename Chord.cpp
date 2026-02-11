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
    string s;
    cin>>s;
    string p[]= {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
    for(auto x:p)if(s==x)
        {
            cout<<"Yes"<<endl;
            return;
        }
    cout<<"No"<<endl;
}
int main()
{
    INI;
    uwu();
}
