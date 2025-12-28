#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,b;
        cin>>n>>k>>b;
        if(k%2==1||b>n-1||k>n)
        {
            cout<<"No\n";
            continue;
        }
        if(n==1)
        {
            if(k==0&&b==0)
            {
                cout<<"Yes\n";
                cout<<"0\n";
            }
            else
            {
                cout<<"No\n";
            }
            continue;
        }
        vector<pair<int,int>>edges;
        for(int i=1; i<=b; i++)
        {
            edges.push_back({i,i+1});
        }
        if(b+2<=n)
        {
            for(int i=b+2; i<=n; i++)
            {
                edges.push_back({b+1,i});
            }
            if(b>=1)edges.push_back({n,1});
        }
        vector<int>deg(n+1,0);
        for(auto [u,v]:edges)
        {
            deg[u]++;
            deg[v]++;
        }
        int odd_count=0;
        for(int i=1; i<=n; i++)
        {
            if(deg[i]%2==1)odd_count++;
        }
        set<pair<int,int>>edge_set;
        for(auto [u,v]:edges)
        {
            if(u>v)swap(u,v);
            edge_set.insert({u,v});
        }
        if(odd_count>k)
        {
            vector<int>odd_vertices;
            for(int i=1; i<=n; i++)
            {
                if(deg[i]%2==1)odd_vertices.push_back(i);
            }
            int idx=0;
            while(odd_count>k&&idx+1<odd_vertices.size())
            {
                int u=odd_vertices[idx];
                int v=odd_vertices[idx+1];
                if(u>v)swap(u,v);
                if(edge_set.find({u,v})==edge_set.end())
                {
                    edges.push_back({u,v});
                    edge_set.insert({u,v});
                    deg[u]++;
                    deg[v]++;
                    odd_count-=2;
                }
                idx+=2;
            }
        }
        else if(odd_count<k)
        {
            vector<int>even_vertices;
            for(int i=1; i<=n; i++)
            {
                if(deg[i]%2==0)even_vertices.push_back(i);
            }
            int idx=0;
            while(odd_count<k&&idx+1<even_vertices.size())
            {
                int u=even_vertices[idx];
                int v=even_vertices[idx+1];
                if(u>v)swap(u,v);
                if(edge_set.find({u,v})==edge_set.end())
                {
                    edges.push_back({u,v});
                    edge_set.insert({u,v});
                    deg[u]++;
                    deg[v]++;
                    odd_count+=2;
                }
                idx+=2;
            }
        }
        int odd_final=0;
        for(int i=1; i<=n; i++)
        {
            if(deg[i]%2==1)odd_final++;
        }
        if(odd_final!=k)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
            cout<<edges.size()<<"\n";
            for(auto [u,v]:edges)
            {
                cout<<u<<" "<<v<<"\n";
            }
        }
    }
    return 0;
}
