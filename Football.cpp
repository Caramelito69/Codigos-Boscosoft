#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio();
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
main()
{
    INI
    int n,g;
    while((cin>>n>>g))
    {
        vector<pair<int,int>>vec;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            vec.emplace_back(make_pair(a,b));
        }
        sort(vec.rbegin(),vec.rend());
        int c=0;
        for(auto elem:vec)
        {
            if(elem.first>elem.second)
                c+=3;
            else if(elem.first==elem.second && g)
                c+=3,g--;
            else if(elem.first==elem.second && !g)
                c++;
            else if(elem.first<elem.second)
            {
                g=g-(elem.second-elem.first);
                if(g>=0)
                    if(g)
                        c+=3,g--;
                    else
                        c++;
            }
        }
        cout<<c<<endl;
    }
}
