#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using ll = long long; 
#define nn      '\n'  
using namespace std; 

const int N = 1e6 + 5;
bitset<N> marked;
vector<int> prime;  

void Sieve() {
    for(int i = 4; i <= N; i+=2) {
        marked[i] = 1;  
    }
    for(int i = 3; i * i <= N; i+= 2) {
        if(!marked[i]) { 
            for(int j = i * i; j <= N; j += (i << 1)) {
              marked[j] = 1;  
            }
        }
    }
    prime.push_back(2); 
    for(int i = 3; i <= N; i+=2) {
        if(!marked[i]) {  
            prime.push_back(i);
        }
    }
} 
bool isPrime(ll n) {
    if(n < 2) return false;
    return !marked[n];
}
void solve() {  
    int n; cin >> n;
    vector<int> ans;
    for(int i = 2; i <= n + 1; i++ ) ans.push_back(i);
    for(int i = 0; i < n; i++ ) {
        if(isPrime(ans[i])) {
            ans[i] = 1;
        }
        else {
            ans[i] = 2;
        }
    }
    set<int> st;
    for(auto &it : ans ) {
        st.insert(it);
    }
    int ln = st.size();
    cout << ln << nn;
    for(auto &it : ans ) cout << it << " ";
    cout << nn;

}
int32_t main() {
    FastIO;   
    Sieve(); 
    int test_case = 1; 
   // cin >> test_case;  
    while (test_case--) {
        solve();
    }

    return 0;
}
