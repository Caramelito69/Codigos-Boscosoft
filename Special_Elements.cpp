#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ll n1[10001],n2[10001];
void solve()
{
    ll n,s=0;cin>>n;
    fore(i,0,n-1)
    {
        cin>>n1[i];
        s+=n1[i];
        n2[i]=s;
    }
    if(n==1){cout<<0<<endl;return;}
    vector<bool>b(s+1,0);
//    fore(i,0,n-1)
//        cout<<n2[i]<<" ";
    ll ini=n1[0]+n1[1];
    //vec[1].push_back(ini);
    b[ini]=1;
    fore(i,2,n-1)
    {
        //vector<ll>aux;
        //aux.push_back(n2[i]);
        b[n2[i]]=1;
        fore(j,1,i-1)
        {
            //aux.push_back(n2[i]-n2[j-1]);
            b[n2[i]-n2[j-1]]=1;
        }
        //vec[i]=aux;
    }
//    fore(i,0,n)
//    {
//        for(auto e:vec[i])
//            cout<<e<<" ";
//        cout<<endl;
//    }
    ll c=0;
//    for(auto e:b)
//        cout<<c++<<"->"<<e<<endl;
    fore(i,0,n-1)
        {
            if(b[n1[i]])c++;
        }
        cout<<c<<endl;
//9
//3 1 4 1 5 9 2 6 5
}
main()
{
    INI query solve();
}
