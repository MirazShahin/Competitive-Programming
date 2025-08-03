#include <bits/stdc++.h>
using namespace std; 

void solve() { 
    long long n, m; cin >> n >> m;
    vector<long long> v(n), w(m);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    for(int i = 0; i < m; i++ ) cin >> w[i];
    long long gc = 0;
    for(int i = 1; i < n; i++ ) {
        gc = 1LL * gcd(gc, v[i] - v[0]);
    }
    for(auto &it : w) {
        long long ans = 1LL * gcd(gc, v[0] + it);
        cout << ans << " ";
    }
    cout << '\n';
}
int32_t main() { 
    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while(test_case--) {
        //cout << "Case " << Case << ": ";
        solve();
        Case++;
    }
    return 0;
}
