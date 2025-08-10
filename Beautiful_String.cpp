#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),b.end()
#define rall(v) v.rbegin(),b.rend()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
string cad="abc";
void solve()
{
    string cad1;cin>>cad1;
    if(cad1.size()==1&&cad1[0]=='?'){cout<<'a'<<endl;return;}
    if(cad1.size()==1&&cad1[0]!='?'){cout<<cad1<<endl;return;}
    fore(i,0,cad1.size()-1)
        if(cad1[i]==cad1[i+1]&&cad1[i]!='?')
            {cout<<-1<<endl;return;}
    if(cad1[0]=='?'&&cad1[1]=='?')cad1[0]='a';
    fore(i,0,cad1.size()-1)
    {
        if(cad1[i]=='?'&&i==0)
            cad1[i]=cad[(int(cad1[i+1])-95)%3];
        else if(cad1[i]=='?'&&i==cad1.size()-1)
            cad1[i]=cad[(int(cad1[i-1])-95)%3];
        else if(cad1[i]=='?'&&cad1[i-1]!=cad1[i+1]&&cad1[i-1]!='?'&&cad1[i+1]!='?')
            cad1[i]=cad[6-(int(cad1[i-1])-96)-(int(cad1[i+1])-96)-1];
        else if(cad1[i]=='?'&&cad1[i-1]==cad1[i+1]&&cad1[i-1]!='?')
            cad1[i]=cad[((int(cad1[i-1])-96)+1)%3];
        else if(cad1[i]=='?'&&cad1[i-1]!=cad1[i+1]&&cad1[i+1]=='?')
            cad1[i]=cad[(int(cad1[i-1])-96+1)%3];
    }
    cout<<cad1<<endl;
}
main()
{
    INI query solve();
}
