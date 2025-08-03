#include <bits/stdc++.h>

#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;

const long long  N = (long long) 2e5 + 2;
long long arr[N];
int n, k;
bool check(long long mid) {
    long long sum = 0;
    for(int i = 1; i <= n; i++ ) {
        sum += min(arr[i], mid);
    }
    return sum >= 1LL * (mid * k);
}
void solve() {

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i]; 
    }
    long long low = 0, high = 1LL * (1e18 / k);
    long long ans = 0;
    while(low <= high ) {
        long long mid = (low + high) / 2LL;
        if(check(mid)) {
            ans = mid;
            low = mid + 1LL;
        }
        else {
            high = mid - 1LL;
        }
    }
    cout << ans << '\n';
     
}

int32_t main() {
    FastIO;

    int test_case = 1;
    // cin >> test_case; 
    int Case = 1;
    while (test_case--) {
        // cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
