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
    ll n;
    cin >> n;
    vll v(n);
    for(ll i = 0; i < n; i++ ) cin >> v[i];
    sort(all(v));
    ll GCD = v[0];
    for(ll i = 1; i < n; i++ ) {
        GCD = gcd(GCD, v[i]);
    }
 
    ll num = GCD;
    ll ans = 0;
    for(ll i = 1; i * i <= num; i++ ) {
        if (num % i == 0) {
            if(num / i == i) ans++;
            else ans += 2;
        }
    }
   cout << ans << nn;
}
int32_t main()
{
    FastIO;

    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
