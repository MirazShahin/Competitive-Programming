#include <bits/stdc++.h>
using namespace std;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    while(q-- ) {
        int l, r; cin >> l >> r;
        if(r - l > 1001 ) {
            cout << 0 << '\n'; 
        }
        else {
           vector<int> x;
           for(int i = l; i <= r; i++ ) {
              x.push_back(v[i]);
           }
           sort(x.begin(), x.end());
           int ans = INT_MAX;
           for(int i = 1; i < x.size(); i++ ) {
              ans = min(ans, x[i] - x[i - 1]);
           }
           cout << ans << '\n'; 
        }   
    }
}
int32_t main() {
    FastIO;
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
     cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
