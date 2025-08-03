
#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

void solve() {
    int n;
    cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    ll sum = 0;
    ll mx_sum = LONG_MIN;
    for(int i = 0; i < n; i++ ) {
        sum += 1LL * v[i];
        if(sum >= mx_sum) {
            mx_sum = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    cout << mx_sum << nn;
}
int32_t main() {
    FastIO;

    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
