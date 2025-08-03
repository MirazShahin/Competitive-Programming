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

vector<int> dijkstra(int n, int source, vector<vector<pair<int, int>>> &adj) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distance(n, INT_MAX);
    distance[source] = 0;
    pq.push({0, source});
    while (!pq.empty()) {
        int node = pq.top().second;
        int dist = pq.top().first;
        pq.pop();
        for (auto it : adj[node]) {
            int adjNode = it.first;
            int adjDist = it.second;
            if (adjDist + dist < distance[adjNode]) {
                distance[adjNode] = adjDist + dist;
                pq.push({adjDist + dist, adjNode});
            }
        }
    }
    return distance;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;  
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    auto ans = dijkstra(n, 0, adj);
    if (ans[n - 1] != INT_MAX) {
        cout << ans[n - 1] << nn;
    } else {
        cout << "Impossible" << nn;
    }
}

int32_t main() {
    FastIO;

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while (test_case--) {
        cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
