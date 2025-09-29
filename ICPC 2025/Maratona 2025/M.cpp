#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define readv(a,n) vi a(n);for(int &x:a)cin>>x;
#define printv(a) for(int &x:a)cout<<x<<" ";cout<<endl;
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,k;
    cin>>n>>k;
    readv(a,n)
    vector<ll>pre(n),su(n);
    pre[0]=a[0];
    fore(i,1,n-1)
        pre[i]=min(pre[i-1], a[i]);
    su[n-1]=a[n-1];
    forei(i,n-2,0)
        su[i]=min(a[i], su[i+1]);
    vector<ll>c(n);
    fore(i,0,n-1)
        c[i]=a[i]+i;
//    for(auto e:pre)
//        cout<<e<<" ";
//    for(auto e:su)
//        cout<<e<<" ";
    deque<int>dq;
    vector<ll>vec(n);
    fore(i,0,n-1)
    {
        while (!dq.empty() && dq.front()<i-k+1)
            dq.pop_front();
        while (!dq.empty() && c[dq.back()]>=c[i])
            dq.pop_back();
        dq.push_back(i);
        vec[i]=c[dq.front()];
    }
    printv(c)
    ll ans=0;
    fore(i,0,n-1)
    {
        int L=max(ll(0), i-k+1);
        ll reforza=vec[i]+(k-i);
        ll lmin=inf;
        if (L>0)
            lmin=pre[L-1];
        ll rmin=inf;
        if (i<n-1)
            rmin=su[i+1];
        ll can=min(reforza, min(lmin,rminf));
        ans=max(can,ans);
    }
    cout<<ans<<endl;
}
main()
{
    INI solve();
}
