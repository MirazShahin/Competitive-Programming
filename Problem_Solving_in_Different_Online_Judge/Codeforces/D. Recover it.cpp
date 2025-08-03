#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n' 

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int; 
const ll N = 4e6 + 7; 
 
bitset<N >marked;
vll prime;
vii greatest_div(N + 1, 0);
void precomputeGreatestDivisor() { 
    for (int i = 1; i <= N; i++) { 
        for (int j = 2 * i; j <= N; j += i) {
            greatest_div[j] = i; 
        }
    } 
}
void Sieve()
{
    for(int i = 4; i <= N; i+=2) {
        marked[i] = 1;
    }
    for(int i = 3; i * i <= N; i+= 2) {
        if(!marked[i])
        for(int j = i * i; j <= N; j += (i << 1)) {
            marked[j] = 1;
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
    vii v(n * 2);
    multiset<int> ms; 
    for(int i = 0; i < n * 2; i++ ) {
        cin >> v[i]; ms.insert(v[i]);
    }
    vii ans;
    while(!ms.empty()) {
        auto it = prev(ms.end());
        int mx = *it;
        if(isPrime(*it)) {
            int idx = upper_bound(all(prime), mx) - prime.begin();
            ans.push_back(idx);
            ms.erase(ms.find(idx));
            ms.erase(it);
        }
        else {
            ans.push_back(mx);
            ms.erase(ms.find(greatest_div[mx]));
            ms.erase(it);
        }
    }
    for(auto &it : ans ) cout << it << " ";
    cout << nn;
    
}
int32_t main() {
    FastIO; 
    Sieve();
    precomputeGreatestDivisor();
    int test_case = 1;
    //cin >> test_case;
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
