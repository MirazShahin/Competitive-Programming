
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

vector<vector<int>> adj;
void solve() {
   int n, m;
   cin >> n >> m;
   vector<int> indegree(n, 0);
   adj.clear();
   adj.resize(n + 1);
   for(int i = 0; i < m; i++ ) {
      vector<int> v(n);
      for(int j = 0; j < n; j++ ) {
        cin >> v[j];
        v[j]--;
        if(j > 1) {
            adj[v[j-1]].push_back(v[j]);
            indegree[v[j]]++;
        }
      }

   }
   queue<int> q;
   for(int i = 0; i < n; i++ ) {
       if(indegree[i] == 0) {
        q.push(i);
       }
   }
   int ans = 0;
   while(!q.empty()) {
       int node = q.front();
       q.pop();
       ans++;
       for(auto it : adj[node]) {
          indegree[it]--;
          if(indegree[it] == 0) {
            q.push(it);
          }
       }
   } 
   if(ans == n) cout << "YES" << nn;
   else cout << "NO" << nn;
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

