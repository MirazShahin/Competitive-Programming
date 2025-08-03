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
bool cmp(const pair<int, int>&a, const pair<int,int>&b){
    if(a.first < b.first) return 1;
    else if(a.first == b.first) return (a.second > b.second);
    return false;
}
void solve() {
    string s; cin >> s;
    vector<int> prefix;
    int cnt = 0;
    for(int i = 0; i < sz(s); i++ ) {
        prefix.push_back(cnt);
        if(s[i] == '(') cnt++;
        else cnt--;
    }
    vector<pair<int, int>> pr;
    for(int i = 0; i < sz(s); i++ ) {
        pr.push_back({prefix[i], i + 1});
    } 
    sort(all(pr), cmp);
    for(auto &it : pr) {
        cout << s[it.second - 1];
    }
} 
int32_t main() {
    FastIO;
 
    int test_case = 1;
    // cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
