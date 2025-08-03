#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
#define nn  '\n'
using ll = long long; 
using namespace std; 

void solve() {
    ll x, c; 
    cin >> x >> c;
    
    vector<pair<ll, ll>> mp;  
    for(ll i = 2; i * i <= x; i++) {
        int count = 0;
        while(x % i == 0) {
            count++;
            x /= i;
        }
        if(count > 0) {
            mp.push_back({i, count}); 
        }
    }  
    
    if(x > 1) {
        mp.push_back({x, 1});  
    }
    if(c == 1) {
        cout << 1 << nn;
        return;
    }
    ll ans = 1LL;
    for(auto &[prime, count] : mp) {
        int expo = min(count % c, c - count % c);
        for(int i = 0; i < expo; i++ ) {
            ans *= 1LL * prime;
        }
    }
    cout << ans << nn;
}

int32_t main() {
    FastIO;   
 
    int test_case = 1; 
    cin >> test_case;
    
    while(test_case--) {
        solve();
    }

    return 0;
}
