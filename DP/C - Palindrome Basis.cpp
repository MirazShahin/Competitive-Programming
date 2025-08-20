#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
vector<int> pali;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

void Palindrome(int n = 40005) {
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            pali.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (auto &p : pali) {
        if (p > n) break;
        for (int i = p; i <= n; i++) {
            dp[i] = (dp[i] + dp[i - p]) % MOD;
        }
    }
    cout << dp[n] << '\n';
}

int main() {
    FastIO;
    int t;
    cin >> t;
    Palindrome();
    while (t--) solve();
}
