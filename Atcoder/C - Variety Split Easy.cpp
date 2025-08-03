#include <bits/stdc++.h>
using namespace std;
using ll = long long;


#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

void do_or_die() {
    int n; cin >> n; 
    vector<int> v(n);  
    map<int, int> mp;
    set<int> st;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++ ) {
        st.insert(v[i]);
        mp[v[i]]--;
        if(mp[v[i]] == 0) {
            mp.erase(v[i]);
        }
        ans = max(ans, sz(st) + sz(mp));
    }
    cout << ans << '\n';
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
