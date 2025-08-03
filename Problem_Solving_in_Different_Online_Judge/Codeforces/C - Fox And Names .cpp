#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define nn         '\n'
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++ ) {
        cin >> s[i];
    }

    vector<int> indegree(26);
    int vis[26];
    fill(all(indegree), 0);
    fill(vis, vis + 26, 0);
    vector<vector<int>> graph;

    bool f = 1;
    graph.resize(26);
    set<int> node;
    for(int i = 0; i < n - 1; i++ ) {
        int len1 = sz(s[i]);
        int len2 = sz(s[i + 1]);
        for(int j = 0; j < min(len1, len2); j++) {
            if(s[i][j] != s[i + 1][j]) {
                graph[s[i][j] - 'a'].push_back(s[i + 1][j] - 'a');  /// Graph Representation
                indegree[s[i + 1][j] - 'a']++;   /// Indegree counting
                f = 0;
                node.insert(s[i][j] - 'a');
                node.insert(s[i + 1][j] - 'a');
                break;
            }
        }
        if(f and len1 > len2) {
            cout << "Impossible" << nn;   /// same character string len1 > len2
            return;
        }
    }

    queue<int> q;
    for(int i = 0; i < 26; i++ ) {
        if(node.find(i) != node.end() and indegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()) {
        int var = q.front();
        q.pop();
        ans.push_back(var);
        vis[var] = 1;
        for(auto it : graph[var]) {
            indegree[it]--;
            if(indegree[it] == 0) {
                q.push(it);
            }
        }
    }
    if(sz(ans) < sz(node)) {
        cout << "Impossible" << nn;
    }
    else {
        for(auto it : ans ) cout << char(it + 'a');
        for(int i = 0; i < 26; i++ ) {
            if(vis[i] == 0) {
                cout << char(i + 'a');
            }
            else {
                continue;
            }
        }
    }

    /// Alhamdulillah...
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
