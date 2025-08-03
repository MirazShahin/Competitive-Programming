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
 
void solve() {
   // Code here....
   ll a, b, c, k;
   cin >> a >> b >> c >> k;
   ll ans = 0;
   for(ll x = 1; x <= a; x++ ) {
     for(ll y = 1; y <= b; y++ ) {
        ll z = 1LL * k / (x * y);
        if(1LL * (x * y * z) == k) {
            ll m = a - x + 1;
            ll n = b - y + 1;
            ll o = c - z + 1;
            ans = max(ans, (m * n * o));
        }
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
