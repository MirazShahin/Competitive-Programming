

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
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

void solve()
{
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
            cin >> grid[i][j];
        }
    }

   for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
           if(grid[i][j] == '.') {
              if((i + j) % 2 == 0) {
                 grid[i][j] = 'B';
              }
              else {
                grid[i][j] = 'W';
              }
           }
        }
    }
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
            cout << grid[i][j];
        }
        cout << nn;
    }


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
