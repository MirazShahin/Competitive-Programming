#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

void do_or_die() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> idx(n);
    int cnt = 0;
    for(int i = 0; i < n; i++ ) {
        if(s.substr(i, 2) == "AC") {
            cnt++;   
        }
        idx[i + 1] = cnt;
    } 
    while(q-- ) {
        int l, r; cin >> l >> r;
        l--, r--;
        cout << idx[r] - idx[l] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int test_case = 1; //cin >> test_case;
    while(test_case-- ) {
        do_or_die();
    }
    return 0;
}
