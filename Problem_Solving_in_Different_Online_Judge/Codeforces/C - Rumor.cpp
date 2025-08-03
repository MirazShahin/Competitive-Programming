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

const int N = 1e5 + 9;
int vis[N];
vector<vector<int>> graph;
int n, q;
vii v(N);

int dfs(int node) {
    vis[node] = 1;
   int mn = v[node];

   for(auto child : graph[node]) {
      if(vis[child]) continue;
      mn = min(mn, dfs(child));
   }
   return mn;

}
///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    cin >> n >> q;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
    }

    graph.resize(n + 1);
    for(int i = 0; i < q; i++ ) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    ll ans = 0;
    for(int i = 0; i <= n; i++ ) {
        if(vis[i]) continue;
        ans += 1LL * dfs(i);
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
