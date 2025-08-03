#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

#define nn           '\n'  
using namespace std;  
 
void solve() { 
    int n; cin >> n;
    vector<int> v(n); 
    map<int, int> mp;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i]; mp[v[i]]++;
    }
    vector<int> ans1, ans2;
    for(auto &[it, cnt] : mp ) {
        if(cnt > 2) {
            cout << "NO\n";
            return;
        }
        if(cnt == 2) {
            ans1.push_back(it);
        }
        if(cnt <= 2) {
            ans2.push_back(it);
        }
    }
    reverse(ans2.begin(), ans2.end());
    cout << "YES\n";
    cout << ans1.size() << nn;
    for(auto &it : ans1) cout << it << ' ';
    cout << nn;
    cout << ans2.size() << nn;
    for(auto &it : ans2) cout << it << ' ';
    cout << nn;
    
}
int32_t main() {
    FastIO;   
    int test_case = 1; 
   // cin >> test_case;
    int Case = 1;
    while(test_case--) {
      // cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
