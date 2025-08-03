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
 
void solve() {
    string s; cin >> s;
    string w;
    int idx = -1;
    for(int i = 0; i < sz(s); i++ ) {
        if(s[i] == ':') {
            idx = i;
            break;
        }
        w.push_back(s[i]);
    } 
    if(sz(w) == 4) {
       w.push_back('s');
    }
    cout << w;
    for(int i = idx; i < sz(s); i++ ) cout << s[i];
    cout << nn; 
}
int32_t main() {
    FastIO; 
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
