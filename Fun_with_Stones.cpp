#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,ll>
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int mod=1000000007;
ll pow_mod(ll a, ll b)
{
    ll res=1;
    a%=mod;
    while (b)
    {
        if (b&1) res=res*a%mod;
        a=a*a%mod;
        b >>= 1;
    }
    return res;
}
void F(int A, int B, int C)
{
//    if (A < 0 || B < 0) return 0;
    int dp[2][2][2] = {0};
    dp[1][1][1] = 1;
    forei(i,31,0)
    {
        int a_bit = (A >> i) & 1;
        int b_bit = (B >> i) & 1;
        int c_bit = (C >> i) & 1;
        int new_dp[2][2][2] = {0};
        fore(ta,0,1)
        {
            fore(tb,0,1)
            {
                fore(tc,0,1)
                {
                    int cur = dp[ta][tb][tc];
                    if (cur == 0) continue;
                    fore(x,0,1)
                    {
                        if (ta && x > a_bit) continue;
                        fore(y,0,1)
                        {
                            if (tb && y > b_bit) continue;
                            int z = x ^ y;
                            if (tc && z > c_bit) continue;
                            int nta = ta && (x == a_bit);
                            int ntb = tb && (y == b_bit);
                            int ntc = tc && (z == c_bit);
                            new_dp[nta][ntb][ntc] = (new_dp[nta][ntb][ntc] + cur) % mod;
                        }
                    }
                }
            }
        }
        memcpy(dp, new_dp, sizeof(dp));
    }
    fore(i,0,1)
    {
        fore(j,0,1)
        {
            fore(k,0,1)
            {
                cout<<dp[i][j][k]<<" ";
            }
            cout<<" ; ";
        }
        cout<<endl;
    }
//    int res=0;
//    fore(i,0,1)
//        fore(j,0,1)
//            fore(k,0,1)
//                res=(res + dp[i][j][k])%mod;
//    return res;
}
//void solve()
//{
//    int L1, R1, L2, R2, L3, R3;
//    cin >> L1 >> R1 >> L2 >> R2 >> L3 >> R3;
//    ll T1 = (R1 - L1 + 1) % mod;
//    ll T2 = (R2 - L2 + 1) % mod;
//    ll T3 = (R3 - L3 + 1) % mod;
//    ll T = T1 * T2 % mod;
//    T = T * T3 % mod;
//    T = (T + mod) % mod;
//    ll C1 = F(R1, R2, R3);
//    ll C2 = F(L1-1, R2, R3);
//    ll C3 = F(R1, L2-1, R3);
//    ll C4 = F(L1-1, L2-1, R3);
//    ll D1 = F(R1, R2, L3-1);
//    ll D2 = F(L1-1, R2, L3-1);
//    ll D3 = F(R1, L2-1, L3-1);
//    ll D4 = F(L1-1, L2-1, L3-1);
//    ll veces = (C1 - C2 - C3 + C4) % mod;
//    veces = (veces - (D1 - D2 - D3 + D4)) % mod;
//    veces = (veces % mod + mod) % mod;
//    ll s = (T - veces) % mod;
//    s = (s + mod) % mod;
//    ll inv = pow_mod(T, mod-2);
//    ll ans = s * inv % mod;
//    cout << ans << endl;
//}
main()
{
    INI F(3,4,5);
}
