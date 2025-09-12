//#include <bits/stdc++.h>
//using namespace std;
//main(){
//    int n, c, a, b, w, s=0;cin>>n>>c;
//    map<pair<int,int>,int>m;
//    while(c--)
//    {
//        cin>>a>>b>>w;
//        m[{min(a,b),max(a,b)}]=max(w,m[{min(a,b),max(a,b)}]);
//    }
//    for(auto &i:m)s+=i.second;
//    cout<<s;
//}
#include<bits/stdc++.h>
#define query int c; cin>>c; while(c--)
using namespace std;
void solve(){
    int n,q,a,b,c; cin>>n>>q;
    map<pair<int,int>,int> xd;
    while(q--)
    {
        cin>>a>>b>>c;
        if(xd[{a,b}]==0||xd[{b,a}]==0) xd[{a,b}]=c,xd[{b,a}]=c;
        else if(xd[{a,b}]>c||xd[{b,a}]>c) xd[{a,b}]=c,xd[{b,a}]=c;
    }
    int sum=0;
    for(auto x:xd)
    {
        sum+=x.second;
    }
    cout<<sum/2<<endl;
}
int main()
{
    //query
    solve();
}
