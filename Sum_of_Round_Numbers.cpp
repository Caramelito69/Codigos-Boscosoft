#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n,i=0;cin>>n;
    vector<int>vec;
    while(n)
    {
        if(n%10!=0)
            vec.emplace_back((n%10)*pow(10,i));
        n/=10,i++;
    }
    cout<<vec.size()<<endl;
    for(int e:vec)
        cout<<e<<" ";
    cout<<endl;
}
main()
{
    INI query solve();
}

//Solucion Conrado
//#include <bits/stdc++.h>
//using namespace std;
//main()
//{
//    int t, c,k;
//    cin>>t;
//    while(t--)
//        {
//        cin>>k;
//        int l=log10(k)+1;
//        cout<<l;
//        for(int i=0;i<l;i++)
//        {
//            int d=pow(10,i);
//            c=(int(k/d)%10)*d;
//            if(c)cout<<c<<endl;
//        }
//    }
//}










