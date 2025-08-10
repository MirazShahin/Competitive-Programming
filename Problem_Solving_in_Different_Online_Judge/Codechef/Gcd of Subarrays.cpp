#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
void solve() {
    long long n, k; cin >> n >> k;
    long long total = (n * (n + 1)) / 2;
    if(total > k) {
        cout << -1 << '\n';
    }
    else {
        if(total == k) {
            for(long long i = 0; i < n; i++ ) {
                cout << 1 << ' ';
            }
            cout << '\n';
        }
        else {
            cout << k - (total - 1) << ' ';
            for(long long i = 1; i < n; i++ ) {
                cout << 1 << ' ';
            }
            cout << '\n';
        }
    }
}

int main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) solve();
}
