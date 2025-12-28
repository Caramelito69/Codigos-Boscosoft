#include<bits/stdc++.h>
#define I cin.tie(0)->sync_with_stdio(0);cout.tie(0);
using namespace std;
void s()
{
    long long  a,b;cin>>a>>b;
   cout<<a-__gcd(a,b)<<endl;
}
int main()
{
    I
    long long n;cin>>n;
    while(n--)s();
}
