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
   ll l, r;
   cin >> l >> r;
   ll a = 0, b = 0, c = 0;
   if((l & 1)) {
      a = l + 1;
      b = a + 1;
      c = b + 1;
   }
   else {
      a = l;
      b = a + 1;
      c = b + 1;
   }
   if(a < l or b < l or c < l or a > r or b > r or c > r) {
     cout << -1 << nn;
     return;
   }
   else {
     cout << a << sp << b << sp << c << nn;
   }

   /*
      Total complexity is O(1)
   */
}
int32_t main() { 
    FastIO; 

    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while (test_case--) {
        solve();
        Case++;
    }

    return 0;
}

/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
