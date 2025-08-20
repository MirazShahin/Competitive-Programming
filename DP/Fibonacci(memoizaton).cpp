#include <bits/stdc++.h>
using namespace std; 

int Fibonacci(int n, vector<int> &dp) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = Fibonacci(n - 1, dp) + Fibonacci(n - 2 ,dp);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> dp(n + 1, -1);
        Fibonacci(n, dp);
        cout << dp[n] << '\n'; 
    }
    return 0;
}
