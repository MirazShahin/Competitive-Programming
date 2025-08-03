#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
const int N = 2e5 + 7;
#define nn      '\n'  
using namespace std; 

void solve() { 
    int n; cin >> n;
    vector<int> v(n); 
    for(int i = 0; i < n; i++ ) {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    long long x = 1LL * v[0] * v[n - 1];
    set<long long> divisors;
    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            divisors.insert(i); 
            divisors.insert(x / i);
        }
    }

    vector<long long> all_divisors;
    all_divisors.assign(divisors.begin(), divisors.end());
    int len = all_divisors.size();
    if(n + 2 != len) {
        cout << -1 << nn;
    } else {
        int cnt = 0;
        for(int i = 0; i < n; i++ ) {
            if (binary_search(all_divisors.begin(), all_divisors.end(), v[i])) {
                cnt++;
            }
        }
        if(cnt == n) {
            cout << x << nn;
        } else {
            cout << -1 << nn;
        }
    }
}

int32_t main() {
    FastIO;   
    int test_case = 1; 
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        solve();
        Case++;
    }

    return 0;
}
