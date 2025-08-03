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
    // Code here....
    string s;
    cin >> s;
    //cout << s[0] << sp << s[sz(s) - 1] << nn;
    if(s[0] != '1') {
        cout << "NO" << nn;
        return;
    }
    if(s[sz(s) - 1] == '9') {
        cout << "NO" << nn;
        return;
    }
    bool ok = 1;
    for(int i = 1; i < sz(s) - 1; i++ ) {
        if(s[i] == '0') {
            ok = 0;
            break;
        }
    }
    if(ok) cout << "YES" << nn;
    else cout << "NO" << nn;
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
