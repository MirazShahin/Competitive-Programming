#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()


using namespace std;
using ll = long long int;
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n, k;
    cin >> n >> k;
    vii v(2 * n);
    for(int i = 0; i < 2 * n; i++ ) cin >> v[i];
//    sort(all(v));
    vii w;
    for(int i = 0; i < n; i++ ) {
        w.push_back(v[i]);
    }
    vii s;
    for(int i = n; i < 2 * n; i++ ) {
        s.push_back(v[i]);
    }
    sort(all(w));
    sort(all(s));
    map<int,int> mp, xp;
    for(auto u : w) {
        mp[u]++;
    }
    for(auto u : s) {
        xp[u]++;
    }
    vii ans1;
    for(int i = 0; i < n; i++ ) {
        if(mp[w[i]] >= 2 ) {
            ans1.push_back(w[i]);
        }
    }
    vii ans2;
    for(int i = 0; i < n; i++ ) {
        if(xp[s[i]] >= 2 ) {
            ans2.push_back(s[i]);
        }
    }
    if(ans1.size() >= k * 2 and ans2.size() >= k * 2) {
        for(int i = 0; i < k * 2; i++ ) {
            cout << ans1[i] << sp;
        }
        cout << nn;
        for(int i = 0; i < k * 2; i++ ) {
            cout << ans2[i] << sp;
        }
        cout << nn;
    }
    else {
      for(int i = 0; i < n; i++ ) {
        if(mp[w[i]] == 1 and xp[w[i]] == 1) {
            ans1.push_back(w[i]);
            ans2.push_back(w[i]);
        }
      }
      for(int i = 0; i < k * 2; i++ ) {
        cout << ans1[i] << sp;
      }
      cout << nn;
      for(int i = 0; i < k * 2; i++ ) {
        cout << ans2[i] << sp;
      }
      cout << nn;
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
