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

const int N = 1e5 + 7;

vector<vector<int>> tree;
int vis[N];
int sub_tree[N];

void dfs(int node, int parent) {
    vis[node] = 1;
    sub_tree[node] = 1;
    for(auto child : tree[node]) {
        if(!vis[child]) {
            dfs(child, node);
            sub_tree[node] += sub_tree[child];
        }
    }
}

void solve() {
    int n;
    cin >> n;
    tree.resize(n + 1);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);

    sort(sub_tree + 1, sub_tree + n + 1);
//    for(int i = 1; i <= n; i++ ) {
//        cout << sub_tree[i] << sp;
//    }
    if((n & 1)) {
        cout << "-1" << nn;
        return;
    }
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(sub_tree[i] % 2 == 0) {
            ans++;
        }
    }
    cout << ans << nn;
}

int32_t main() {
    FastIO;

    int test_case = 1;
    while(test_case--) {
        solve();
    }

    return 0;
}
