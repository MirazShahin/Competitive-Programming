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
      int n; cin >> n;
      int sum = 0;
      vector<int> ans;
      for(int i = 0; i < n; i++ ) {
        string s;
        cin >> s;
        if(s == "donate") {
           int k;
           cin >> k;
           sum += k;
           ans.push_back(sum);
        }
        else {
            if(ans.empty()) {
                cout << 0 << nn;
            }
            else {
                cout << ans.back() << nn;
            }
        }
      }

}
int32_t main() {
    FastIO; 

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
     cout << "Case " << Case << ": \n";
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
