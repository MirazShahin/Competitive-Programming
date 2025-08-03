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
    vii v(n);
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }  
    int ans = INT_MAX;
    int sum = 0;
    int min_index = -1; 
    for(int i = 0; i < n; i++ ) {
       sum += v[i];
       if(i >= k - 1) {
          if(ans > sum) {
            ans = sum;
            min_index = i - k + 1;
          }
          sum -= v[i - k + 1]; 
       }
    }
    cout << min_index + 1 << nn;
    /*
      O(n) Here I using slinding window Technique
    */
}
int32_t main() {
    FastIO;
 
    int test_case = 1;
   // cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
 
