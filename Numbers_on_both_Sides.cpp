#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define forei(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<int,int>
#define vecpar vector<par>
#define dbg(v) cout<<#v<<'\n'<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
const ll mod=1e9+7;
const int MAXN = 100005;
int N;
ll A[MAXN], B[MAXN];
int K, L;
vector<ll> comp;
struct Fenw
{
    int n;
    vector<ll> tree;
    Fenw(int n) : n(n), tree(n+1, 0) {}
    void update(int index, ll delta) {
        for (; index <= n; index += index & -index) tree[index] += delta;
    }
    ll query(int index) {
        ll s = 0;
        for (; index>0; index -= index & -index) s += tree[index];
        return s;
    }
};

ll compute_top_L(int L, int M, Fenw &freq_tree, Fenw &sum_tree, vector<ll> &comp) {
    int low = 1, high = M;
    int thresh = 0;
    while (low <= high) {
        int mid = (low+high)/2;
        ll freq = freq_tree.query(M) - freq_tree.query(mid-1);
        if (freq >= L) {
            thresh = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    if (thresh == 0) return 0;
    ll count_above = freq_tree.query(M) - freq_tree.query(thresh);
    ll sum_above = sum_tree.query(M) - sum_tree.query(thresh);
    ll need = L - count_above;
    return sum_above + need * comp[thresh-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i=0; i<N; i++) cin >> A[i];
    for (int i=0; i<N; i++) {
        cin >> B[i];
        comp.push_back(B[i]);
    }
    cin >> K >> L;

    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());
    int M = comp.size();

    Fenw freq_tree(M);
    Fenw sum_tree(M);

    ll left_prefix[K+1];
    left_prefix[0] = 0;
    for (int i=1; i<=K; i++) {
        left_prefix[i] = left_prefix[i-1] + A[i-1];
    }

    ll right_sum[K+1];
    right_sum[0] = 0;
    for (int i=1; i<=K; i++) {
        right_sum[i] = right_sum[i-1] + A[N-i];
    }

    for (int i=N-K; i<N; i++) {
        int pos = lower_bound(comp.begin(), comp.end(), B[i]) - comp.begin() + 1;
        freq_tree.update(pos, 1);
        sum_tree.update(pos, B[i]);
    }

    ll ans = left_prefix[0] + right_sum[K] + compute_top_L(L, M, freq_tree, sum_tree, comp);

    for (int x=1; x<=K; x++) {
        int pos_add = lower_bound(comp.begin(), comp.end(), B[x-1]) - comp.begin() + 1;
        freq_tree.update(pos_add, 1);
        sum_tree.update(pos_add, B[x-1]);

        int pos_remove = lower_bound(comp.begin(), comp.end(), B[N-K+x-1]) - comp.begin() + 1;
        freq_tree.update(pos_remove, -1);
        sum_tree.update(pos_remove, -B[N-K+x-1]);

        ll base = left_prefix[x] + right_sum[K-x];
        ll topL = compute_top_L(L, M, freq_tree, sum_tree, comp);
        ans = max(ans, base + topL);
    }
    cout << ans << endl;
}
