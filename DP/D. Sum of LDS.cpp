#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define int long long
int DP(int i, vector<int> &dp, vector<int> &v, int n) {
    if(i == 0) {
        dp[0] = 1;
    }
    if(dp[i] != -1) return dp[i];
    if(v[i] > v[i - 1]) dp[i] = 1 + DP(i - 1, dp, v, n);
    else dp[i] = i + 1 + DP(i - 1, dp, v, n);
    return dp[i];
} 
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    vector<int> dp(n + 1, -1);
    DP(n - 1, dp, v, n);
    int ans = 0;
    for(auto &it : dp) {
        if(it != -1) ans += it;
        // cout << it << ' ';
    }
    cout << ans << '\n';
     
}

signed main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) solve();
}
