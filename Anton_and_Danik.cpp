#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n;cin>>n;
    string cad;cin>>cad;
    int a=0,d=0;
    for(char e:cad)
        switch(e)
        {
            case 'A':a++;break;
            case 'D':d++;break;
        }
    if(d==a)cout<<"Friendship";
    else if(d>a)cout<<"Danik";
    else cout<<"Anton";
    cout<<endl;
}
main()
{
    INI solve();
}
