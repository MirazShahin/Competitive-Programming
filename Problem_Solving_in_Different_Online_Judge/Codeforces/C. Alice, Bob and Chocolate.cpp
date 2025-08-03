#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
using ll = long long;
void solve() { 
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    int alice_total = 0;
    int bob_total = 0;
    int alice_eat = 0;
    int bob_eat = 0;
    int i = 0, j = n - 1;
    while(i <= j) { 
        if(alice_eat <= bob_eat) {
            alice_eat += v[i];
            i++;
        }
        else {
            bob_eat += v[j];
            j--;
        } 
    }
    cout << i << " " << n - i << '\n';
}

int32_t main() {
    FastIO;
 
    int test_case = 1;
    // cin >> test_case;
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
 
