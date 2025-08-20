#include <bits/stdc++.h>
using namespace std; 
long long frogJump(int i, vector<long long> &dp, vector<int> &v, int n) {
    if(i == n - 1) return 0;
    if(dp[i] != -1) return dp[i];
    long long minJump1 = LLONG_MAX, minJump2 = LLONG_MAX;
    if(i + 1 < n) minJump1 = frogJump(i + 1, dp, v, n) + abs(v[i] - v[i + 1]);
    if(i + 2 < n) minJump2 = frogJump(i + 2, dp, v, n) + abs(v[i] - v[i + 2]);
    return dp[i] = min(minJump1, minJump2);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++ ) cin >> v[i];
        vector<long long> dp(n, -1);
        frogJump(0, dp, v, n);
        cout << dp[0] << '\n';
    }
    return 0;
}
