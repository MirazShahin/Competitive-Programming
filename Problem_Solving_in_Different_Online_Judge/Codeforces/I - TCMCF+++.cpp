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
    vii ans;
    for(int i = 0; i < n; i++ ) {
        if(v[i] > 0) {
            ans.push_back(v[i]);
        }
    }
    vii negative;
    for(int i = 0; i < n; i++ ) {
        if(v[i] < 0) {
            negative.push_back(v[i]);
        }
        
    }
    sort(all(negative));
    if(ans.empty() and negative.empty()) {
        cout << 0 << nn;
        return;
    }
    int zero = count(all(v), 0);
    if(ans.empty() and sz(negative) == 1 and zero == 0) {
        cout << negative[0] << nn;
        return;
    }
    if(ans.empty() and sz(negative) == 1 and zero != 0) {
        for(int i = 0; i < zero; i++ ) cout << 0 << sp;
        cout << nn;
        return;
    }
    if(sz(negative) % 2 == 0) {
        for(auto u : negative) {
            ans.push_back(u);
        }
    }
    else {
        negative.pop_back();
        for(auto u : negative) {
            ans.push_back(u);
        }
    }
   
    for(auto u : ans ) cout << u << sp;
    cout << nn;
}

int32_t main() {
 
    FastIO;

    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while(test_case--) {
        solve();
        Case++;
    }

    return 0;
}
