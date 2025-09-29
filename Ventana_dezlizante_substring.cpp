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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    string s,t;cin>>s>>t;
    map<char,int>count_t;
    map<char,int>count_s;
    for(char e:t)
        count_t[e]++;
    int need=count_t.size();
    int have=0,ansL=-1,ansR=-1,minL=inf;
    int l=0;
    fore(i,0,s.size()-1)
    {
        if(count_t[s[i]])
        {
            count_s[s[i]]++;
            if(count_s[s[i]]==count_t[s[i]])
                have++;
        }
        while(have==need)
        {
            int new_len=i-l+1;
            if (new_len<minL)
                ansL=l,ansR=i,new_len=minL;
            if(count_t[s[l]])
            {
                count_s[s[l]]--;
                if(count_s[s[l]]<count_t[s[l]])
                    have--;
            }
            l++;
        }
    }
    if(ansL<0)
        cout<<"No encontro\n";
    else
        fore(i,ansL,ansR)
            cout<<s[i];
//s="ADOBECODEBANC"
//t="ABC"
}
main()
{
    INI solve();
}
