#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
typedef long long ll;
using namespace std;
bool miau(ll n){
    while(n>6){
        ll s=0;
        while(n>0) s+=(n%10)*(n%10),n/=10;
        n=s;
    }
    return n==1;
}
signed main(){
    INI
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<(miau(n)?"Feliz":"Triste")<<'\n';
    }
}
