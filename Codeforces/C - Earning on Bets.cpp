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
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    ll Lcm = 1;
    for(int i = 0; i < n; i++ ) {
        Lcm = 1LL * lcm(Lcm, v[i]);
    } 
    //cout << Lcm << endl;
    for(int i = 0; i < n; i++ ) {
        v[i] = 1LL * Lcm / v[i];
    }
    // for(auto u : v) cout << u << sp;
    // cout << nn;
    ll sum = 1LL * accumulate(all(v), 0LL);
    if(sum < Lcm) {
        for(auto u : v) cout << u << sp;
        cout << nn;
    }
    else {
        cout << -1 << nn;
    }
}
int32_t main()
{
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
