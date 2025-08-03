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
///(__________________________(__MS__MiRAZ_847)____________________________)

void solve() {
    //Code is here(.....)
    int n, k;
    cin >> n >> k;
    string password;
    for(int i = 1; i <= k; i++ ) {
        password.push_back(char(i + 96));
    }
   // cout << password << nn;
    if(sz(password) == n) {
        cout << password << nn;
    }
    else {
        int extra = n - sz(password);
        for(int i = 0; i < ceil(1.0 * extra / 2); i++ ) {
            password.push_back('a');
            password.push_back('b');
        }
        for(int i = 0; i < n; i++ ) {
            cout << password[i];
        }
        cout << nn;
    }
}
int32_t main() {
    FastIO;
 
    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
