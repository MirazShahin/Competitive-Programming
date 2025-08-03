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
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
 
void solve() {
   // Code here....
    int n;
    cin >> n;
    bitset<32> bs(n);
    string s = bs.to_string();
    reverse(all(s));
    vii ans(32);
    for(int i = 0; i < 32; i++ ) {
        ans[i] = s[i] - '0';
    }
    int i = 0;
    while(i < 30) {
        if(ans[i] == 0){
            i++;
            continue;
        }
        int j = i + 1;
        while(ans[j] == 1) {
            ans[j] = 0;
            j++;
        }
        if(j >  i + 1) {
            ans[j] = 1;
            ans[i] = -1;
        }
        i = j;
    }
    cout << sz(ans) << nn;
    for(auto u : ans ) cout << u << sp;
    cout << nn;
}
int32_t main() {
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
