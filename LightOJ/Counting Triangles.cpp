#include <bits/stdc++.h>
using namespace std; 
 
void solve() { 
    int n; cin >> n;
    vector<int> v(n);
    for(int &it : v) cin >> it;
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        for(int j = i + 1; j < n; j++ ) {
            int sum = v[i] + v[j];
            int idx = upper_bound(v.begin(), v.end(), sum - 1) - v.begin();
            idx--;
            if(idx > j) {
                ans += idx - j;
            } 
        }
    }
    cout << ans << '\n';
}
int32_t main() { 
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        cout << "Case " << Case << ": ";
        solve();
        Case++;
    }
    return 0;
}
