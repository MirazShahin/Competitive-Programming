
#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long;

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n;
    cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];

    reverse(all(v));
    vll pre(n);
    pre[0] = 1LL * v[0];
    for(int i = 1;  i < n; i++ ) {
        pre[i] = 1LL * pre[i - 1] + v[i];
    }
//    for(auto u : pre ) {
//        cout << u << sp;
//    }
//    cout << nn;
    sort(all(pre));
    cout << pre[n - 1] << nn;

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
