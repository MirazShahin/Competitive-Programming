#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using namespace std;
using ll = long long int;

bool check(ll mid, int n, vector<ll> &v) {
    int cnt = 0;
    for(int i = 0; i < n - 1;  ) {
       if(v[i] + mid >= v[i + 1]) {
          cnt += 2;
          i += 2;
       }
       else {
          i++;
       }
    }
    return n - cnt <= 1;
}
void solve() {
    int n; cin >> n;
    vector<ll> v(n); 
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    ll low = 1, high = 1e18;
    ll ans = 0;
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(check(mid, n, v)) {
           ans = mid;
           high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << '\n';
}
int32_t main() {
    FastIO;
 
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
