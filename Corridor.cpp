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
#define vii vector<ii>
#define viii vector<int,ii>
#define vs vector<string>
#define F first
#define S second
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    readi(n);
    reads(s1);
    reads(s2);
    bool ban1=false;
    for(char c:s1) if(c=='1') ban1=true;
    for(char c:s2) if(c=='1') ban1=true;
    if(!ban1)
    {
        cout<<"YES"<<endl;
        fore(i,0,n-1) cout<<"-";
        cout<<endl;
        fore(i,0,n-1) cout<<"-";
        cout<<endl;
        return;
    }
    if(s1[0]=='0')
    {
        cout<<"NO"<<endl;
        return;
    }
    string r1="";
    vi p(n);
    int l1=-1;
    fore(i,0,n-1)
        if(s1[i]=='1')
                l1=i;
    fore(i,0,l1)
        if(s1[i]=='0')
        {
            cout<<"NO"<<endl;
            return;
        }
    if(l1!=n-1 && l1%2==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    int cont=0;
    fore(i,0,n-1)
    {
        if(i<=l1)
        {
            if(i%2==0)
                r1+='+',cont++;
            else
                r1+='-',cont--;
        }
        else
            r1+='-',cont--;
        p[i]=cont;
    }
    string r2="";
    int may=-1e18;
    fore(i,0,n-1)
    {
        bool u=(s1[i]=='1');
        bool l=(i>0 && s2[i-1]=='1');
        if(s2[i]=='1' && !u && !l)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(s2[i]=='0')
        {
            r2+='-';
            if(u && p[i]-1>=0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                if(l && may-1>=0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                may=-1e18;
        }
        else
        {
            int po=-1e18;
            if(l) po=max(po,may);
            if(u) po=max(po,p[i]);
            if(po-1>=0)
                r2+='-',may=po-1;
            else
                r2+='+',may=po+1;
        }
    }
    cout<<"YES"<<endl<<r1<<endl<<r2<<endl;
}
main()
{
    INI  query solve();
}
