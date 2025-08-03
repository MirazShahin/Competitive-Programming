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
    /*
      20 - 06 - 2024
    */
    int n; cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    sort(all(v));
    int g = 0;
    for (int i = 1; i < n; i++) {
        g = gcd(g, v[i] - v[i - 1]);
    }
    
    int final_ans = -1;
    for (int i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            if (i <= 1e9) final_ans = max(final_ans, i);
            if (g / i <= 1e9) final_ans = max(final_ans, g / i);
        }
    } 
    cout << final_ans << nn;
    
    /*
    
    */
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
