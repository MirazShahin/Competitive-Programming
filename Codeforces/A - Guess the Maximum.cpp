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
     int n;
     cin >> n;
     vii v(n);
     for(int i = 0; i < n; i++ ) cin >> v[i];
     vii mx;
     for(int i = 0; i < n - 1; i++ ) {
     	int m = max(v[i], v[i + 1]);
     	mx.push_back(m);
     }
     sort(all(mx));
     // for(auto u : mx ) cout << u << sp;
     // cout << nn;
     cout << mx[0] - 1 << nn;
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
