#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

///Extension Header file----->>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/detail/standard_policies.hpp>

#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;


///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----Modular Arithmetic----<<<<<<<<<<<<<<<<<<<<<<<<<---------------

const  ll MOD = (ll) 1e9 + 7;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----The End----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
const int N = 1000001;
vii cat(1000001);
int n, k;
vector<vector<int>> graph;
int cnt[N];
int ans;
int vis[N];
void dfs(int node) {
    vis[node] = 1;
    if(cnt[node] > k) return;
    int counter = 0;

    for(auto child : graph[node] ) {
        if(vis[child]) {
            continue;
        }
        cnt[child] = cnt[node] + 1;
        if(cat[child] == 0) cnt[child] = 0;
        dfs(child);
        counter++;
    }
    if(counter == 0) {
        ans++;
    }
}
void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        cat[i] = x;
    }
    int edge = n - 1;
    graph.resize(n + 1);
    for(int i = 0; i < edge; i++ ) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cnt[0] = cat[0];
    dfs(0);
//    for(int i = 1; i <= n; i++ ) cout << cnt[i] << sp ;
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

