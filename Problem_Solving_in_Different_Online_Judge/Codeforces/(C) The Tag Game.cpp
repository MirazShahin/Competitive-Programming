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

void bfs_for_bob(int a, vector<vector<int>> &adj, vector<int> &dis_a) {
    queue<int> q;
    q.push(a);
    dis_a[a] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto it : adj[node]) {
            if(dis_a[it] == -1) {
                dis_a[it] = dis_a[node] + 1;
                q.push(it);
            }
        }
    }
}
void bfs_for_alice(int a, vector<vector<int>> &adj, vector<int> &dis_a) {
    queue<int> q;
    q.push(a);
    dis_a[a] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto it : adj[node]) {
            if(dis_a[it] == -1) {
                dis_a[it] = dis_a[node] + 1;
                q.push(it);
            }
        }
    }
}
void solve() {
    int n, k;
    cin >> n >> k;
    k--;
    vector<vector<int>> adj;
    adj.resize(n + 1);
    for(int i = 0; i < n - 1; i++ ) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dis_b(n, -1);
    vector<int> dis_a(n, -1);
    bfs_for_bob(k, adj, dis_b);
    bfs_for_alice(0, adj, dis_a);
 
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        if(dis_a[i] > dis_b[i]) ans = max(ans, dis_a[i] * 2);
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
