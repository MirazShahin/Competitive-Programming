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
    /*
      21 - 06 - 2024  
    */
    int k;
    string s;
    cin >> k >> s;
    map<char,int> mp;
    for(auto u : s) {
        mp[u]++;
    }
    bool check = 1;
    for(auto [u, v] : mp) {
        if(v % k) {
            check = 0;
            break;
        }
    }
    if(!check) {
        cout << -1 << nn;
        return;
    }
    string ans;
    for(auto [u, v] : mp) {
        ll x = v / k;
        while(x--) {
            ans.push_back(u);
        }
    }
    while(k--) {
        for(int i = 0; i < sz(ans); i++ ) {
          cout << ans[i];
        }
    }
    cout << nn;
     
}
int32_t main() { 
    FastIO; 
    
    int test_case = 1;
   // cin >> test_case;
    int Case = 1;
    while (test_case--) {
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
