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
#define rall(x)    (x).rbegin(), (x).rend()
using namespace std;
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n;
    cin >> n;
    vii v(12);
    for(int i = 0; i < 12; i++ ) cin >> v[i];
    sort(all(v));
    reverse(all(v));
    int total = accumulate(all(v), 0);
    if(total < n) {
        cout << -1 << nn;
        return;
    }
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < 12; i++ ) {
        if(sum >= n) {
            break;
        }
        sum += v[i];
        ans++;

    }
    cout << ans << nn;
}
int32_t main()
{
    FastIO;

    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
