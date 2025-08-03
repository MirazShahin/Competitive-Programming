#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;

const int N = 1e6 + 3; 
int n, k;
bool check(int mid, vector<int> &v) {
    int cnt = 0;
    for(int i = 0; i < n; i++ ) {
        if(v[i] <= mid) cnt++;
        if(cnt >= k) return true;
    }
    return cnt >= k;
}  
void solve() { 
    cin >> n >> k; 
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = -1;
    int low = 1, high = 1e9;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(check(mid, v)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++ ) {
       if(v[i] <= ans) cnt++;
    }
    if(cnt != k) cout << -1 << '\n';
    else cout << ans << '\n';
}

int32_t main() {
    FastIO;
 
    int test_case = 1;
    // cin >> test_case;
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
 
