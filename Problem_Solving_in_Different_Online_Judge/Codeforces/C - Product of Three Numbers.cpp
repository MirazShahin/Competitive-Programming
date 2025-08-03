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
   // Code is here....
    int n; cin >> n;  
    vii divi;
    for(int i = 1; i * i <= n; i++ ) {
        if (n % i == 0) {
            divi.push_back(i);
            if (i != n / i) {
               divi.push_back(n / i);
            }
        }
    }
    reverse(all(divi));
    divi.pop_back();
    reverse(all(divi));
    for(int i = 0; i < sz(divi); i++ ) {
        for(int j = i + 1; j < sz(divi); j++) {
            for(int k = j + 1; k < sz(divi); k++ ) {
                if(divi[i] * divi[j] * divi[k] == n) {
                   cout << "YES \n";
                   cout << divi[i] << sp << divi[j] << sp << divi[k] << nn;
                   return;
                }
            }
        }
    }
    cout << "NO" << endl;
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
