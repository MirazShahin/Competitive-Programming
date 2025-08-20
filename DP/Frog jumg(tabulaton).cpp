#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<long long> dp(n, LLONG_MAX);
    dp[0] = 0;  

    for(int i = 1; i < n; i++) { 
        dp[i] = min(dp[i], dp[i-1] + abs(v[i] - v[i-1])); 
        if(i > 1) {
            dp[i] = min(dp[i], dp[i-2] + abs(v[i] - v[i-2]));
        }
    }

    cout << dp[n-1] << "\n";  
    return 0;
}
