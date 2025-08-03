
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

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vii apar_size(n);
    vii des_size(m);
    for(int i = 0; i < n; i++ ) {
        cin >> apar_size[i];
    }
    for(int i = 0; i < m; i++ ) {
        cin >> des_size[i];
    }
    sort(all(apar_size));
    sort(all(des_size));
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i < n and j < m) {
        if(abs(apar_size[i] - des_size[j]) <= k) {
            ans++;
            i++;
            j++;
        }
        else if(apar_size[i] < des_size[j]) {
            i++;
        }
        else if(apar_size[i] > des_size[j]) {
            j++;
        }
    }
    cout << ans << nn;
}
int32_t main() {
    FastIO;

    int test_case = 1;
//     cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
