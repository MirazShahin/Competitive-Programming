#include <bits/stdc++.h>
using namespace std;

void do_or_die() {
    int n, q;
    cin >> n >> q;

    vector<map<int, int>> freq(q);  
    vector<vector<int>> idx(n);  
    vector<int> cnt(q); 
    for(int i = 0; i < q; ++i) {
        int k;
        cin >> k;
        cnt[i] = k; 
        for(int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            x--;
            freq[i][x] = 1;  
            idx[x].push_back(i);  
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        b--;
        for(int group_id : idx[b]) {
            if(freq[group_id].count(b)) {
                freq[group_id].erase(b);    
                cnt[group_id]--;   
                if(cnt[group_id] == 0) {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    do_or_die();
    return 0;
}
