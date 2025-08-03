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

    for(int i = 0; i < n; i++ ) cin >> v[i];
    if(n == 1) {
        if(v[0] == 1) {
            cout << 0 << nn;
        }
        else {
            cout << 1 << nn;
        }
        return;
    }
    int mx_zr = 0;
    for(int i = 0; i < n; i++ ) {
      int curr_zr = 0;
        for(int j = i; j < n; j++ ) {
            if(v[j] == 0) curr_zr++;
            else curr_zr--;
            mx_zr = max(mx_zr, curr_zr);
        }
        curr_zr = 0;
    }
    int one = count(all(v), 1);
    if(one == 0) {
        cout << n << nn;
        return;
    }
    if(one == n) {
        cout << n - 1 << nn;
        return;
    }
    cout << one + mx_zr << nn;
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
