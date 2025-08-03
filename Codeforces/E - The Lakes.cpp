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

const int x = 1001, y = 1001;
int n, m;
int grid[x][y];
int vis[x][y];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int bfs(int i, int j) {
    queue<pair<int,int>> q;
    q.push({i, j});
    vis[i][j] = 1;
    int ans = grid[i][j];
    while(!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++ ) {
            int new_row = row + dx[k];
            int new_col = col + dy[k];
            if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and vis[new_row][new_col] != 1 and grid[new_row][new_col] > 0) {
                q.push({new_row, new_col});
                ans += grid[new_row][new_col];
                vis[new_row][new_col] = 1;
            }
        }
    }
    return ans;
}
void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ) {
           if (!vis[i][j] && grid[i][j] != 0) {
               int _ans = bfs(i, j);
               ans = max(ans, _ans);
           }
        }
    }
    cout << ans << nn;
    memset(vis, 0, sizeof(vis));
}
int32_t main() {
    FastIO;

    int test_case = 1;
     cin >> test_case;
    int Case = 1;
    while(test_case--) {
        // cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
