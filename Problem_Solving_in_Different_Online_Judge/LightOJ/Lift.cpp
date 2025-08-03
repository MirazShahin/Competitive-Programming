#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long int; 

void solve() {  
    int a, b; cin >> a >> b;
    cout << 1LL * a * 4 + abs(b - a) * 4 + 3 * 3 + 2 * 5 << nn;  
}
int32_t main() {
    FastIO;   
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
