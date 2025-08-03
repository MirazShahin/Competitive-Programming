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
    int n, l, r;
    cin >> n >> l >> r;
    vii ans;
    ans.push_back(l);
    bool ok = 1;
    for(int i = 2; i <= n; i++ ) {
       int tmp = 0;
       if(l % i) {
         tmp = (i - (l % i));
       }
       ans.push_back(tmp + l);
       if(ans.back() > r) {
         ok = 0;
         break;
       }
    }
    if(!ok) {
        cout << "NO" << nn; 
    }
    else {
        cout << "YES" << nn;
        for(auto u : ans ) cout << u << sp;;
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
