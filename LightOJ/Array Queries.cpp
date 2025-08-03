#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vii        vector<int> 
#define nn         '\n' 

using namespace std; 

const int N = 1e5 + 7; 
int v[N + 4];
int tree[4 * N];
void build(int node, int st, int en) {
    if(st == en) {
        tree[node] = v[st];
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    tree[node] = min(tree[2 * node], tree[2*node + 1]);
}
int query(int node, int st, int en, int l, int r) {
    if (st > r or en < l) {
        return INT_MAX; 
    }
    if (l <= st and r >= en) {
        return tree[node];  
    }
    int mid = (st + en) / 2;
    auto left_min = query(2 * node, st, mid, l, r);
    auto right_min = query(2 * node + 1, mid + 1, en, l, r);
    return min(left_min, right_min);
}
void solve() {  
    int n, q; cin >> n >> q; 
    for(int i = 0; i < n; i++ ) cin >> v[i];
    build(1, 0, n - 1);
    while(q-- ) {
        int l, r; cin >> l >> r;
        l--; r--;
        cout << query(1, 0, n - 1, l, r) << nn;
    }
}
int32_t main() {
    FastIO;   
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
       cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
} 
