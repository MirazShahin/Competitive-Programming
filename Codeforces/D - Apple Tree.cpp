#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define pi         3.1415926535897932384626433832795
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;


///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----The End----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
const int N = 2 * 1e5 + 7;
vector<vector<int>>tree;
int ans[N];
///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----MiRaZ_HoSsAiN_ShAhIn----<<<<<<<<<<<<<<<<<<<<<-----------------
void dfs(int node, int parent) {
    if(tree[node].size() == 1 and tree[node][0] == parent) {  /// Checking leafnode
        ans[node] = 1;
    }

    for(auto child : tree[node]) {
       if(child != parent) {
         dfs(child, node);
         ans[node] += ans[child];
       }
    }
}
///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{

    int n;
    cin >> n;
    tree.clear();
    tree.resize(n + 1);
    for(int i = 0; i < n - 1; i++ ) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    for(int i = 1; i <= n; i++ ) {
        ans[i] = 0;
    }
    dfs(1, 0);
    int q;
    cin >> q;
    for(int i = 1; i <= q; i++ ) {
        int x, y;
        cin >> x >> y;
        cout << (1LL * ans[x] * ans[y]) << nn;
    }
    tree.clear();
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
