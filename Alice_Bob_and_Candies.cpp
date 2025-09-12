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
int n1[10001],n2[10001];
void solve()
{
    int n;cin>>n;
    fore(i,0,n-1)cin>>n1[i];
    ll alip=n1[0],bobp=0,ali=n1[0],bob=0,c=1;
    int id1=0,id2=n-1,pos1=1,pos2=n-1;
    ll ultimo_val_ali=n1[0],ultimo_val_bob=0;
    while(pos2>=pos1)
    {
        //Bob
        for(int i=pos2,bob=0;i>=pos1&&bob<=ultimo_val_ali;bob+=n1[i],i--,pos2=i,ultimo_val_bob=bob);
        bobp+=ultimo_val_bob,c++;
        if(pos2<pos1)break;
        //Alice
        for(int i=pos1,ali=0;i<=pos2&&ali<=ultimo_val_bob;ali+=n1[i],ultimo_val_ali=ali,i++,pos1=i);
        alip+=ultimo_val_ali,c++;
    }
    cout<<c<<" "<<alip<<" "<<bobp<<endl;
//6
//5 9 2 6 5 3
}
main()
{
    INI query solve();
}
