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

int const x = 505;

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n, k;
    cin >> n >> k;
    vii v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
        sum += (1LL * v[i]);
    }
    ll _sum = 1LL * n * (n + 1) / 2;
    ll mex = _sum - sum;
//    cout << mex << nn;
//    v.pop_back();
    v.push_back(mex);
    k %= (n + 1);
    rotate(v.begin(), v.begin() + (n + 1) - k, v.end());
    for(int i = 0; i < n; i++ ) {
        cout << v[i] << sp;
    }
    cout << nn;

}
int32_t main()
{
    FastIO;
//    Sieve();
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
