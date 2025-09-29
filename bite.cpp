#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
using namespace std;
void solve1()
{
    int n;cin>>n;
    if(n&1)
        cout<<"Es impar";
    else
        cout<<"Es par";
}
void solve()
{
//    string a;
//    cin>>a;
//    cout<<a[2];
    int n;
    cin>>n;
    int c=0;
   for(int i=1;i<=n;i++)
   {
      string cad;
      cin>>cad;
        if(cad[1]=='+')
            c++;
        else
            c--;
   }
   cout<<c;
}
main()
{
    solve1();
}
