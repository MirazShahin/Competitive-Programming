#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
 
 
void solve() {
    int n, k; cin >> n >> k;
    vii v(n), motu, tomu;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i]; 
        if(i & 1) tomu.push_back(v[i]);
        else motu.push_back(v[i]);
    }
    sort(all(motu));
    sort(all(tomu), greater<int>());
    ll tomu_score = 0;
    ll motu_score = 0;
    while(k > 0 and !tomu.empty() and !motu.empty()) {
      int a = motu.back();
      int b = tomu.back();
      if(a > b) {
        motu.pop_back();
        tomu.pop_back();
        tomu_score += a;
        motu_score += b;
        k--;
      } 
      else {
        break;
      }
    }
    if(sz(tomu) > 0) {
        tomu_score += accumulate(all(tomu), 0LL);
    }
    if(sz(motu) > 0) {
        motu_score += accumulate(all(motu), 0LL);
    }
    if(tomu_score > motu_score) cout << "YES\n";
    else cout << "NO\n";

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
