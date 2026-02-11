#include<bits/stdc++.h>
^#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void buscar(const vector<int>& vec, int k, int i, int s, vector<int>& vec1, vector<vector<int>>& res)
{
    if (s <= k && !vec1.empty())
        res.push_back(vec1);
    fore(j,i,vec.size()-1)
    {
        if (j>i&&vec[j]==vec[j - 1])continue;
        int c=s+vec[j];
        if (c<=k)
        {
            vec1.push_back(vec[j]);
            buscar(vec,k,j+1,c,vec1,res);
            vec1.pop_back();
        }
    }
}
int main()
{
    vector<int> vec = {6, 3, 4, 9, 13};
    int k = 20;
    sort(vec.begin(), vec.end());
    vector<int>vec1;
    vector<vector<int>>vec2;
    buscar(vec,k,0,0,vec1, vec2);
    for (auto& subconjunto:vec2)
    {
        fore(i,0,subconjunto.size()-1)
            cout<<subconjunto[i]<<" ";
        cout << endl;
    }
}
