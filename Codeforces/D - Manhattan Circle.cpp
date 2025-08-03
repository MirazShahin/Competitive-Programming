#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
///(__________________________(__MS__MiRAZ_847)____________________________)

void solve() {
    //Code is here(.....)
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
            cin >> grid[i][j];
        }
    }
    vector<pair<int,int>> hash;
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
           if(grid[i][j] == '#') {
              hash.push_back({i + 1, j + 1});
           }
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for(auto u : hash) {
        sum1 += u.first;
        sum2 += u.second;
    }
    int row = sum1 / sz(hash);
    int col = sum2 / sz(hash);
    cout << row << sp << col << nn;
    
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
