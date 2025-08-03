#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using ll = long long;
const int N = 1e6 + 7;
#define nn      '\n'  
using namespace std; 

void solve() {  
    int n; 
    cin >> n;
    vector<int> v(n);
    map<int, int> mp; 
    for(ll i = 0; i < n; i++ ) {
        cin >> v[i];
        mp[v[i]]++;
    } 
    ll ans = 0; 
    sort(v.begin(), v.end());  
    int last = -1LL;
    for(int i = 0LL; i < n; i++ ) {
        int element = v[i];
        int cnt = mp[element];
        if(element == last) continue;// Ignorting same element...
        last = element; 
        ans += 1LL * cnt * max(cnt - 1LL, 0LL) * max(cnt - 2LL, 0LL);
        for(int j = 2; j * j <= element; j++ ) {
            if(element % j == 0) {
                int tmp = element / j;
                int tmp_cnt = mp[tmp];
                ll curr = cnt * tmp_cnt;
                if(tmp % j == 0) {
                    int t_cnt = mp[tmp / j];
                    ans += curr * t_cnt;
                }
            }
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
