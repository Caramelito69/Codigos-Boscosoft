#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define ii pair<ll,ll>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<ll,ii>
#define read(n) int n;cin>>n;
#define readv(vec,a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cout<<e<<" ";
#define int ll
#define pb push_back
#define eb emplace_back
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    ll a;
    while (cin>>a && a!=0)
    {
        readv(vec,a)
        ll may =-inf,l=-1,r=-1,cont=0,l1=0;
        fore(i,0,a-1)
        {
            if (cont+vec[i]<vec[i])
                cont=vec[i],l1=i;
            else
                cont+=vec[i];
            if (cont>may)
                may=cont,l=l1,r=i;
            else if(cont==may)
            {
                if (i>r)
                    l=l1,r=i;
                else if (i==r)
                    if (i-l1<r-l)
                        l=l1;
            }
        }
        if (may>0)
            cout<<may<<" "<<l<<" "<<r<<"\n";
        else
            cout<<"0 -1 -1"<<"\n";
    }
}
//6
//-3 5 -2 7 2 4
main()
{
    INI solve();
}
