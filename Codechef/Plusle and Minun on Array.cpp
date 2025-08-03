#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;
 
void solve() { 
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
        v[i] = abs(v[i]); 
    }
    vector<pair<int, int>> odd, even;
    for(int i = 0; i < n; i++ ) {
       if(i % 2 == 0) even.push_back({v[i], i});
       else odd.push_back({v[i], i});
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end()); 
    if(odd[odd.size() - 1].first > even[0].first) { 
        swap(v[odd[odd.size() - 1].second], v[even[0].second]);
    }  
    ll ans = 0;
    for(int i = 0; i < n; i++ ) {
        if(i % 2 == 0) ans += v[i];
        else ans -= v[i];
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
 
