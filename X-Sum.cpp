#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query ll n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define int ll
#define endl '\n'
typedef long long ll;
typedef long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> tablero(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> tablero[i][j];
        int sum, maxSum = -999999;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                {
                sum = tablero[i][j];
                for(int k = j + 1, q = i + 1; k<m && q<n; k++, q++)
                    sum += tablero[q][k];
                for(int k = j - 1, q = i - 1; k>=0 && q>=0; k--, q--)
                    sum += tablero[q][k];
                for(int k = j + 1, q = i - 1; k<m && q>=0; k++, q--)
                    sum += tablero[q][k];
                for(int k = j - 1, q = i + 1; k>=0 && q<n; k--, q++)
                    sum += tablero[q][k];
                maxSum = max(maxSum, sum);
            }
        }
        cout << maxSum << endl;
//3 3
//3 4 5
//4 5 2
//2 3 5
}
main()
{
    INI query solve();
}
