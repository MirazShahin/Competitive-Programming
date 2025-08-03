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
    vii x, y;
    int pos = -1;
    if(is_sorted(all(v))) {
        cout << "YES" << nn;
        return;
    }
    for(int i = 0; i < n - 1; i++ ) {
        if(v[i] <= v[i + 1]) {
            x.push_back(v[i]);
        }
        else {
            pos = i + 1;
            break;
        }
    }
    x.push_back(v[pos - 1]);
    for(int i = pos; i < n; i++ ) {
        y.push_back(v[i]);
    }
    vii ans;
    for(int i = 0; i < sz(y); i++ ) {
        ans.push_back(y[i]);
    }
    for(int i = 0; i < sz(x); i++ ) {
        ans.push_back(x[i]);
    }
//    for(auto u : ans ) cout << u << sp;
//    cout << nn;
    if(is_sorted(all(ans))) {
        cout << "YES" << nn;
    }
    else {
        cout << "NO" << nn;
    }
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
