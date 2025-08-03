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
   string s;
   cin >> s;
   int n = s[sz(s) - 2] * 10 + s[sz(s) - 1];
   if(n % 4 == 0) cout << 4 << nn;
   else cout << 0 << nn;
  
  /*
     kono number er last duita digit 4 diya vag gele
     oi numbr puratai 4 diye vag jay
  */
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
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
