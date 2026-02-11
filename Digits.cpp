#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define int ll
#define forn(i,n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i = int(s); i < int(n); i++)
#define forit(i, str) for(auto i = str.begin(); i != str.end(); i++)
#define dbg(x) cerr << #x << " = " << (x) << endl
#define all(v) (v).begin(),(v).end()
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ii pair<int,int>
#define vi vector<int>
#define F first
#define S second
#define pb push_back
#define pf push_front
#define mp make_pair
#define el "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    string n;
    while(cin>>n && n!="END")
    {
        if(n=="1"){cout<<1<<endl;continue;}
        ll c=2;
        while(n.size()>1)
            n=to_string(n.size()),c++;
        cout<<c<<endl;
    }
}
main()
{
    solve();
}
