#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;

double check(int n, double x0, vector<int>& x, vector<int>& t) {
    double max_time = 0;
    for (int i = 0; i < n; i++) {
        max_time = max(max_time, t[i] + abs(x[i] - x0));  
    }
    return max_time;
}

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), t(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i]; 
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i]; 
    } 
    double low = *min_element(x.begin(), x.end());
    double high = *max_element(x.begin(), x.end());
    double ans = low;
    while (high - low > 1e-6) {
        double mid = (low + high) / 2;
        double time_left = check(n, mid - 1e-7, x, t);
        double time_right = check(n, mid + 1e-7, x, t);
        if (time_left > time_right) {
            ans = mid;
            low = mid; 
        } else {
            high = mid;   
        }
    }

    cout << fixed << setprecision(6) << ans << '\n';   
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
