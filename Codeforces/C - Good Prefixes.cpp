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
///(__________________________(__MS__MiRAZ_847)____________________________)

void solve() {
    //Code is here(.....)
    ll n;
    cin >> n;
    vll v(n);
    for(ll i = 0; i < n; i++ ) cin >> v[i];
    vll mx_value;
    ll mx = 0;
    for(auto u : v) {
       mx = max(mx, u);
       mx_value.push_back(mx);
    }
    int j = 0;
    int i = 0;
    ll sum = 0;
    ll ans_ = 0;
    while(i < n and j < n) {
         sum += v[i];
         if(sum - mx_value[j] == mx_value[j]) {
            ans_++;
            j++;
            i++;
         }
         else { 
            i++;
            j++;
         }
    }
    cout << ans_ << nn;
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
