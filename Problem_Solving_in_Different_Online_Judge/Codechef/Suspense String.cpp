#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
 

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
 
void solve() {
    int n; cin >> n;
    deque<char> dq(n);
    for(int i = 0; i < n; i++ ) {
        cin >> dq[i];
    }
    deque<char> ans;
    if(sz(dq) % 2) {
      char x = dq.front();
      dq.pop_front();
      ans.push_back(x);  
    }
    while(!dq.empty()) {
        char a = dq.front();
        char b = dq.back();
        dq.pop_front();
        dq.pop_back();
        if(n % 2) {
            if(b == '0') {
               ans.push_back('0');
            }
            if(b == '1') {
               ans.push_front('1');
            }
            if(a == '1') {
               ans.push_back('1');
            }
            if(a == '0') {
               ans.push_front('0');
            } 
        }
        else {
            if(a == '1') {
               ans.push_back('1');
            }
            if(a == '0') {
               ans.push_front('0');
            } 
            if(b == '0') {
               ans.push_back('0');
            }
            if(b == '1') {
               ans.push_front('1');
            }
        }
    }
    for(auto &it : ans ) cout << it;
    cout << '\n';
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
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
