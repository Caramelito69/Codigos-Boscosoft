#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define endl '\n'
#define fi first
#define se second
void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<pair<int, int>> s(n);
    vector<pair<int, int>> e(n);

    int sum_s = 0;
    int sum_e = 0;

    for(int i=0; i<n; i++) {
        cin >> s[i].fi;
        s[i].se = i;
        sum_s += s[i].fi;
    }

    for(int i=0; i<n; i++) {
        cin >> e[i].fi;
        e[i].se = i;
        sum_e += e[i].fi;
    }

    if (n == 1) {
        cout << e[0].fi << endl;
        return;
    }

    sort(all(s));
    sort(all(e), greater<pair<int, int>>());

    int base_cost = 2 * sum_e - 2 * sum_s;
    int max_diff = -4e18;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(e[i].se != s[j].se) {
                int current_diff = e[i].fi - 2 * s[j].fi;
                max_diff = max(max_diff, current_diff);
            }
        }
    }

    cout << base_cost - max_diff << endl;
}

signed main()
{
    fastio;
    solve();
}
