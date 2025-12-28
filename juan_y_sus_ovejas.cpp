#include<bits/stdc++.h>
#define I cin.tie(0)->sync_with_stdio(0);cout.tie(0);
using namespace std;
struct UF
{
    vector<int>padre;
    vector<int>sz;
    UF(int n)
    {
        padre.resize(n+1);
        iota(padre.begin(),padre.end(),0);
         sz.assign(n+1,1);
    }
    int buscar(int a)
    {
        if(padre[a]==a)
            return a;
        return padre[a]=buscar(padre[a]);
    }
    void unir(int a,int b)
    {
        int x=buscar(a);
        int y=buscar(b);
        if(x!=y)
        {
            if(sz[x]<sz[y])
                swap(x,y);
            padre[y]=x;
            sz[x]+=sz[y];
        }
    }
};
void buscar(int nodo,vector<vector<int>>&vec,vector<bool>&vec1,int&n)
{
    n++;
    vec1[nodo]=1;
    for(auto e:vec[nodo])
    {
        if(!vec1[e])
            buscar(e,vec,vec1,n);
    }
}
void s()
{
    int a,b;
    while(cin>>a>>b && a!=0 && b!=0){
    vector<vector<int>>vec(a+1);
    UF g(a);
    for(int i=0;i<b;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
        g.unir(x,y);
    }
    int may=INT_MIN;
    for(int i=1;i<=a;i++)
    {
        int n=0;
        vector<bool>vec1(a+1);
        buscar(i,vec,vec1,n);
        may=max(may,n);
    }
    int c=0;
    for(int i=1;i<=a;i++)
        if(g.padre[i]==i)c++;
    cout<<"Existen "<<c<<" posibles razas"<<endl;
    cout<<"La raza que tiene mas ovejas tiene "<<may<<endl;
}}
main()
{
    I s();
}
