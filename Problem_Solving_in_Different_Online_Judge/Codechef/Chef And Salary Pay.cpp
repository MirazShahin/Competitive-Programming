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
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int one = count(all(s), '1');
    // cout << one << nn;
    ll ans = 1LL * (one * x);
    int mx = 0;
    int cnt = 0;
    for(int i = 0; i < sz(s); i++ ) {
       if(s[i] == '1') {
        cnt++;
       }
       else {
        cnt = 0;
       }
       mx = max(mx, cnt);
    }
    ans += (mx * y);
    cout << ans << nn;
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
