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
   int x, y;
   cin >> x >> y;
   double l = y * log(x); // (x) ^ y = ln(x)^ y = y * ln(x)
   double r = x * log(y); // (y) ^ x = ln(y)^ x = x * ln(y)
  // cout << l << sp << r << nn;
   if(l > r) {
      cout << ">" << nn; 
   }
   else if(l < r) {
      cout << "<" << nn;
   }
   else {
      cout << "=" << nn;
   }
     
}
int32_t main() {
    FastIO; 

    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
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
