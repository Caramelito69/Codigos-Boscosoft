#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define endl '\n'
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    int ini=(k/3)+bool(k%3),fin=(k/2)+bool(k%2);
    if(n>=ini&&n<=fin)
    {
        while(n!=0)
        {
            if(k==1)
            {
                cout<<'X';
                k--,n--;
            }
            else if(k/3<n)
            {
                cout<<"X-";
                n--,k-=2;
            }
            else if(k%n==0)
            {
                cout<<"-X-";
                n--,k-=3;
            }
        }
    }
    else
        cout<<'*';
}
main()
{
    INI solve();
}
