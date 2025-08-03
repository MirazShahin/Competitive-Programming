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
    int n;  
    cin >> n;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x] = i + 1;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (gcd(i, j) == 1 && mp[i] && mp[j]) {
                ans = max(ans, mp[i] + mp[j]);
            }
        }
    }
    cout << ans << nn;

    /*
       Total Complexity is O(1000 * 1000) = O(1000000) 
    */
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

/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
