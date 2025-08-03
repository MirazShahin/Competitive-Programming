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
    int n; cin >> n;
    vii v(n); 
    for(int i = 0; i < n; i++ ) cin >> v[i];
    vii negative, positive, zero;
    for(int i = 0; i < n; i++ ) {
        if(v[i] < 0) negative.push_back(v[i]);
        else if(v[i] > 0) positive.push_back(v[i]);
        else zero.push_back(v[i]);
    }
    if(sz(negative) < 3) {
        cout << 1 << sp << negative[sz(negative) - 1] << nn;
        negative.pop_back();
        cout << 1 << sp << positive[sz(positive) - 1] << nn;
        positive.pop_back();
        cout << sz(negative) + sz(positive) + sz(zero) << sp;
        for(auto u : negative) cout << u << sp;
        for(auto u : positive) cout << u << sp;
        for(auto u : zero) cout << u << sp;
        cout << nn;
    }
    else {
        cout << 1 << sp << negative[sz(negative) - 1] << nn;
        negative.pop_back();
        cout << 2 << sp << negative[sz(negative) - 1] << sp << negative[sz(negative) - 2] << nn;
        negative.pop_back();
        negative.pop_back();
        cout << sz(positive) + sz(negative) + sz(zero) << sp;
        for(auto u : negative) cout << u << sp;
        for(auto u : positive) cout << u << sp;
        for(auto u : zero) cout << u << sp;
        cout << nn;
    }
}
int32_t main() { 
    FastIO; 

    int test_case = 1;
    //cin >> test_case;
    int Case = 1;
    while (test_case--) {
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
