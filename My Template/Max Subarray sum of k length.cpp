#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
///...(__________________________(__MS__MiRAZ_847)____________________________)...///
void solve() {
   // Code is here....
    int n, k; cin >> n >> k;
    vll v(n);
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    ll ans = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++ ) {
       sum += v[i];
       if(i >= k) {
          ans = max(ans, sum);
          sum -= v[i - k + 2];
       }
    }
    cout << ans << nn;

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
