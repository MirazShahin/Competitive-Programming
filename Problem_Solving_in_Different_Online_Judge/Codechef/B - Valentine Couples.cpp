#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;
 
void solve() { 
    int n; cin >> n;
    vector<int> boy(n), girl(n);
    for(int i = 0; i < n; i++ ) cin >> boy[i];
    for(int i = 0; i < n; i++ ) cin >> girl[i];
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        ans = max(ans, girl[i] + boy[i]);
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
 
