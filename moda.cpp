#include<bits/stdc++.h>
using namespace std;
void uwu()
{
   int n;
   cin>>n;
   int may=-1e9;
   map<int,int>mapi;
   vector<int>vec;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        mapi[a]++;
    }
    for(auto elem:mapi)
    {
        may=max(may,elem.second);

    }
    for(auto e:mapi)
    {
       if(may<=e.second){
        may=e.second;
        vec.push_back(e.first);}
    }
    for(int i=0;i<vec.size();i++)
    {
       cout<<vec[i]<<" ";
    }

}
int main()
{
    uwu();
}

