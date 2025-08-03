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
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    int one = count(all(v), 1);
    int zero = n - one;
    if(zero < (n / 2)) {
        sort(all(v), greater<int>());
        vii ans;
        for(int i = 0; i < n - zero; i++ ) {
            ans.push_back(v[i]);
        }
        if(sz(ans) % 2) {
           ans.pop_back();
        }
        cout << sz(ans) << nn;
        for(auto u : ans ) cout << u << sp;
        cout << nn;
      }
    else {
        sort(all(v));
        vii ans;
        for(int i = 0; i < n - one; i++ ) {
            ans.push_back(v[i]);
        } 
        cout << sz(ans) << nn;
        for(auto u : ans ) cout << u << sp;
        cout << nn;
      }  
     
}
int32_t main() { 
    FastIO; 

    int test_case = 1;
    cin >> test_case;
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
