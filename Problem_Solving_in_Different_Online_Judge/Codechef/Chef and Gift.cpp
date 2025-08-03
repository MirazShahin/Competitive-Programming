#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using ll = long long;
using namespace std; 
void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i]; 
    vector<vector<int>> subarrays; 
    for(int i = 0; i < n; i++) { 
        for(int j = i; j < n; j++) { 
            vector<int> subarray;  
            for (int k = i; k <= j; k++) {
                if(v[k] % 2 == 0) {
                    subarray.push_back(v[k]);
                } 
            }
            subarrays.push_back(subarray);  
        }
    }  
    for(auto &it : subarrays) {
        if(it.size() == k) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main() {
    FastIO;

    int test_case = 1;
    cin >> test_case;
    while(test_case--) {
        solve();
    }

    return 0;
}
