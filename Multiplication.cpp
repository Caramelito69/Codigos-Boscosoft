#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

const int MAXN = 100005;

int tree[2 * MAXN][4];
int n, q;
int primes[] = {2, 3, 5, 7};

void update(int l, int r, int counts[]) {
    for (l += n, r += n + 1; l < r; l >>= 1, r >>= 1) {
        if (l & 1) {
            REP(i, 4) if (counts[i] > tree[l][i]) tree[l][i] = counts[i];
            l++;
        }
        if (r & 1) {
            --r;
            REP(i, 4) if (counts[i] > tree[r][i]) tree[r][i] = counts[i];
        }
    }
}

void query(int p, int res[]) {
    REP(i, 4) res[i] = 0;
    for (p += n; p > 0; p >>= 1) {
        REP(i, 4) if (tree[p][i] > res[i]) tree[p][i] = tree[p][i];
    }
}

int main() {
    fastio;

    if (!(cin >> n >> q)) return 0;

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            ll x;
            cin >> l >> r >> x;
            int counts[4] = {0, 0, 0, 0};
            REP(i, 4) {
                while (x > 0 && x % primes[i] == 0) {
                    x /= primes[i];
                    counts[i]++;
                }
            }
            update(l, r, counts);
        } else {
            int x_idx;
            ll y;
            cin >> x_idx >> y;
            int res[4] = {0, 0, 0, 0};
            for (int p = x_idx + n; p > 0; p >>= 1) {
                REP(i, 4) if (tree[p][i] > res[i]) res[i] = tree[p][i];
            }
            bool ok = true;
            REP(i, 4) {
                int y_cnt = 0;
                while (y > 0 && y % primes[i] == 0) {
                    y /= primes[i];
                    y_cnt++;
                }
                if (y_cnt > res[i]) ok = false;
            }
            if (y > 1) ok = false;
            if (ok) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
