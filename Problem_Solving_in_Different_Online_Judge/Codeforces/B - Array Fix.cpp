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
#define rall(x)    (x).rbegin(), (x).rend()

using namespace std;
using ll = long long int;

int digit(int n) {
   int x = n;
   int rem = 0;
   while(x > 0) {
       rem = x % 10;
       x /= 10;
       return x;
   }
}
int digit11(int n) {
   int x = n;
   int rem = 0;
   while(x > 0) {
       rem = x % 10;
       return rem;
       x /= 10;
   }
}

void solve() {
    int n;
    cin >> n;
    vii v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if (is_sorted(all(v))) {
        cout << "YES" << nn;
        return;
    }
    int sorted = 1;
    int last = v.back();
    for(int i = n - 2; i >= 0; i-- ) {
      if(v[i] >= 10) {
         if(last >= v[i]) {
            sorted++;
            last = v[i];
         }
         else {
            break;
         }
       }
       else {
         break;
       }
    }
    vii ans;
    for(int i = 0; i < n - sorted; i++) {
        if(v[i] >= 10 ) {
            ans.push_back(digit(v[i]));
            ans.push_back(digit11(v[i]));
        }
        else {
            ans.push_back(v[i]);
        }
    }
   for(int i = n - sorted; i < n; i++ ) {
     ans.push_back(v[i]);
   }
    if(is_sorted(all(ans))) {
        cout << "YES" << nn;
    }
    else {
        cout << "NO" << nn;
    }
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
