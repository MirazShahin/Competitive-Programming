#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using ll = long long;
using namespace std; 

void solve() {
    int n; cin >> n;
    vector<int> v(n); 
    for(int i = 0; i < n; i++ ) {
        cin >> v[i]; 
    }
    int ans = 0;
    int curr = v[0];
    for(int i = 0; i < n; i++ ) {
        if(curr < v[i]) {
            ans = max(ans, abs(curr - v[i]));
        }
        else {
            curr = v[i];
        }
    }
    if(ans == 0) cout << "Unfit\n";
    else cout << ans << '\n';
}

int32_t main() {
    FastIO;

    int test_case = 1;
    cin >> test_case;
    while(test_case--) {
        solve();
    }

    return 0;
}
