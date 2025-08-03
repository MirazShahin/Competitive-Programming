#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

void do_or_die() {
    int n, m, q; cin >> n >> m >> q;
    map<int, bool> mp;
    map<pair<int, int>, bool> mark;
    while(q-- ) {
        int tp; cin >> tp;
        if(tp == 1) {
            int l, r; cin >> l >> r; 
            mark[{l, r}] = 1;
        }
        else if(tp == 2) {
            int l; cin >> l;
            mp[l] = 1;
        }
        else if(tp == 3) {
            int l, r; cin >> l >> r; 
            if(mark[{l, r}]) cout << "Yes\n";
            else if(mp[l] == 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 

    int test_case = 1;
    // cin >> test_case;
    while (test_case--) { 
        do_or_die();
    }
    return 0; 
}
