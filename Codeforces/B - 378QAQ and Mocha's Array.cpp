
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
    int n; cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    sort(all(v));
    int a = v[0];
    if(a == 1) {
      cout << "YES" << nn;
      return;
    }

    vii x;
    for(int i = 0; i < n; i++ ) {
        if(v[i] % a != 0) {
            x.push_back(v[i]);
        }
    }
    sort(all(x));
    int b = x[0];
    bool ans = true;
    for(int i = 0;  i < sz(x); i++ ) {
        if(x[i] % b != 0) {
            ans = false;
            break;
        }
    }
    if(ans ) cout << "YES" << nn;
    else cout << "NO" << nn;
}
int32_t main()
{
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
