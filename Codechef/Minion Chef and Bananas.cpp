#include <bits/stdc++.h>
using namespace std;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
bool minimum_banana(long long mid, vector<int> &v, int n, int k) {
    long long ans = 0;
    for(int i = 0; i < n; i++ ) {
    	if(v[i] <= mid) {
    	    ans++;
    	}
    	else {
    		ans += ceil(1.0 * v[i] / mid);
    	}
    }
    return ans > k;
} 
void solve() {
    int n, k; cin >> n >> k;
    vector<int> v;
    long long sum = 0;
    for(int i = 0; i < n; i++ ) {
    	int x; cin >> x;
    	sum += 1LL * x;
    	v.push_back(x);
    }
    long long low = 1, high = sum, ans = 0;
    while(low <= high) {
    	long long mid = (low + high) / 2LL;
    	if(minimum_banana(mid, v, n, k)) { 
    		low = mid + 1;
    	}
    	else {
            ans = mid;
    		high = mid - 1;
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
     //cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
