#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6;
bitset<N + 5> mark;
vector<ll> primes;

void sieve() {
    int sq = sqrt(N);
    for (int i = 4; i <= N; i += 2) mark[i] = true;
    for (int i = 3; i <= sq; i += 2) {
        if (!mark[i]) {
            for (int j = i * i; j <= N; j += (i << 1)) {
                mark[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!mark[i]) primes.push_back(i);
    }
}

bool isPrime(int n) {
    if (n < 2) return false;
    return !mark[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        if (n <= 3) {
            if (n == 1) cout << 1 << '\n';
            else if (n == 2) cout << "1 2\n";
            else cout << "1 2 3\n";
            continue;
        } 
        vector<pair<int, vector<int>>> pr;

        vector<int> mark(n, 0);
        for(int i = 3; i <= n; i++ ) {
            if(isPrime(i)) {
                vector<int> a;
                for(int j = i; j <= n; j += i) {
                    if(mark[j - 1] == 0) {
                        a.push_back(j);
                        mark[j - 1] = 1;
                    }
                } 
                pr.push_back({i, a});
            }
        }
        vector<int> acchaaaaa_eii_bepaaar;
        vector<int> ans(n, 0);
        ans[0] = 1;
        for(auto &[x, xx] : pr) {
            if(xx.size() % 2 and xx.size() > 2) {
                acchaaaaa_eii_bepaaar.push_back(xx[1]);
                xx.erase(xx.begin() + 1);
                // break;
            }
            else {
                if(xx.size() == 1) {
                    ans[xx[0] - 1] = xx[0];
                }
            }
        }
        for(auto &[x, xx] : pr) {
            for(int i = 0; i < (int) xx.size() - 1; i += 2) {
                ans[xx[i] - 1] = xx[i + 1];
                ans[xx[i + 1] - 1] = xx[i];
            }
        }
        for(int i = 2; i <= n; i += 2) {
            if(mark[i - 1] == 0) {
                acchaaaaa_eii_bepaaar.push_back(i);
                mark[i - 1] = 1;
            }
        }
        ans[1] = acchaaaaa_eii_bepaaar.back();
        acchaaaaa_eii_bepaaar.pop_back();
        reverse(begin(acchaaaaa_eii_bepaaar), end(acchaaaaa_eii_bepaaar));

        for(int i = 3; i < n; i++ ) {
            if(ans[i] == 0) {
                ans[i] = acchaaaaa_eii_bepaaar.back();
                acchaaaaa_eii_bepaaar.pop_back();
            }
        }
        // set<int> st(begin(ans), end(ans));
        // cout << st.size() << endl;
        for(auto &it : ans ) {
            cout << it << ' ';
        }
    } 

    return 0;
}
