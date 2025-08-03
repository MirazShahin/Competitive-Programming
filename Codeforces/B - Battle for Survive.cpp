#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using ll = long long;
const int N = 1e6 + 7;
#define nn      '\n'  
using namespace std; 

void solve() {  
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    long long x = v[n - 2];
    for(int i = 0; i < n - 2; i++ ) {
        x -= 1LL * v[i];
    }
    cout << 1LL * v[n - 1] - x << nn;
}
int32_t main() {
    FastIO;   
    int test_case = 1; 
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        //cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
