

#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vii        vector<int>
#define nn         '\n'
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    map<int, map<int,int>> mp;
    ll ans = 0;
    for(int i = 0; i < n; i++ ) {
        int needx = (x - v[i] % x) % x;
        int needy = v[i] % y;
        ans += (1LL * mp[needx][needy]);
        mp[v[i] % x][v[i] % y]++;
    }
    cout << ans << nn;
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
