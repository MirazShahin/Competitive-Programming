#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;
 
void solve() { 
    int n, k; cin >> n >> k;
    vector<int> v(n), w(n);
    vector<pair<int, int>> pr;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++ ) {
        cin >> w[i];
    }
    for(int i = 0; i < n; i++ ) {
        pr.push_back({w[i], v[i]});
    }
    sort(pr.begin(), pr.end());
    set<int> seen;
    vector<pair<int, int>> pr1;
 
    for (auto &[x, y] : pr) {
         if(seen.find(y) == seen.end()) {
            pr1.push_back({x, y});
            seen.insert(y);  
        }
    }
    sort(pr1.begin(), pr1.end());
    if(pr1.size() < k) {
        cout << -1 << '\n';
    }
    else {
        ll ans = 0;
        for(int i = 0; i < k; i++ ) {
           ans += pr1[i].first;
        }
        cout << ans << '\n';
    }
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
 
