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
using ll = long long int;
///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n, m;
    cin >> n >> m;
    vii v(n), w(m);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    for(int i = 0; i < m; i++ ) cin >> w[i];
    sort(all(v));
    sort(all(w));
    reverse(all(w));

    int i = 0;
    int j = n - 1;
    int k = m - 1;
    ll ans = 0;
    while(i <= j ) {
        int first_theke = abs(v[i] - w[i]);
        int last_theke = abs(v[j] - w[k]);
        if(first_theke >= last_theke ) {
            ans = 1LL * ans + first_theke;
            i++;
        }
        else {
            j--;
            k--;
            ans = 1LL * ans + last_theke;
        }
    }
    cout << ans << nn;
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
