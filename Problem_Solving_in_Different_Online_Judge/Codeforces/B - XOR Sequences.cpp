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
     ll Xor = x ^ y;
     ll ans = 1;
     if(Xor % 2 == 0) {
     	while(Xor % 2 == 0) {
     		Xor /= 2;
     		ans *= 1LL * 2;
     	}
     }
     cout << ans << nn;
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
