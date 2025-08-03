#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);  
#define nn      '\n'  
using namespace std; 
using ll = long long;


const ll N = (ll) 1e6 + 5;
bitset<N >marked;
vector<int> prime;

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
int factorization(int n) {
    int cnt = 0;
    for(int i = 0; prime[i] * prime[i] <= n; i++ ) {
        while(n % prime[i] == 0) {
            cnt++;
            n /= prime[i];
        }
    }
    if(n > 1) {
        cnt++;
    }
    return cnt;
}
void solve() { 
    int a, b, k; cin >> a >> b >> k;
    if(k == 1) {
        if(a != b and max(a, b) % min(a, b) == 0) cout << "YES\n";
        else cout << "NO\n";
        return;
    }
    int total = factorization(a) + factorization(b);
    if(total >= k) cout << "YES\n";
    else cout << "NO\n";
}
int32_t main() {
    FastIO;  
    Sieve(); 
    int test_case = 1; 
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        solve();
        Case++;
    }

    return 0;
}
