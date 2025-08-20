#include <bits/stdc++.h>
using namespace std; 
int lis(int i, vector<int> &v, vector<int> &dp) {
    if(dp[i] != -1) return dp[i];
    int ans = 1;
    for(int j = 0; j < i; j++ ) {
        if(v[i] >= v[j]) {
            ans = max(ans, lis(j, v, dp) + 1);
        }
    }
    return dp[i] = ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n); 
    vector<int> dp(n, -1);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        ans = max(ans, lis(i, v, dp));
    }
    cout << ans << '\n';
    return 0;
}
