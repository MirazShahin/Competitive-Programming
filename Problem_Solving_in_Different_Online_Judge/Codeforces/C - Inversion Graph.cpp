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
bool parity_check(int n) {
    if((n & 1)) return false;
    else return true;
}
void solve() {
    int n;  cin >> n;
    int arr[n + 2];
    for(int i = 1; i <= n; i++ ) cin >> arr[i];
    int mx = -1;
    int ans = 0;
    for(int i = 1; i <= n; i++ ) {
        mx = max(mx, arr[i]);
        if(mx == i)  ans++;
    }
    cout << ans << nn;
   /*
      Total complexity is O(n) 
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
