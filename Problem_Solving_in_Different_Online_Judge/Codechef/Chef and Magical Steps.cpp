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
 
const int N = 1e7 + 8;
bitset <N+5> mark;
vector<ll>primes;
vector<ll> pre;
vll sum(N);
void sieve() {
    int sq = sqrt(N);
    for (int i = 4; i <= N; i += 2) {
        mark[i] = true;
    }
    for (int i = 3; i <= sq; i += 2) {
        if (!mark[i]) {
            for (int j = i * i; j <= N; j += (i << 1)) {
                mark[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!mark[i])
            primes.push_back(i);
    }
} 
void solve() {
    int x, y; cin >> x >> y;
    x--; y--;
    int a = sum[y] - sum[x + 1];
    cout << (y - x) - a << nn;
} 
int32_t main() {
    FastIO; 
    sieve();
    pre.push_back(0);
    for(int i = 2; i <= N; i++ ) {
        int x = mark[i];
        pre.push_back(!x);
    } 
    sum[0] = pre[0];
    for(int i = 1; i < sz(pre); i++ ) {
        sum[i] = pre[i] + sum[i - 1];
    }
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
 
