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

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n,a, b;
    cin >> n >> a >> b;
    map<int, int> mp;
    int mn = INT_MAX;
    for(int i = 1; i <= n * n; i++ ) {
       int x;
       cin >> x;
       mn = min(mn, x);
       mp[x]++;
    }

    for(int i = 0; i < n; i++ ) {
        int p = mn + i * b;
        int check = p;
        if(mp[check] == 0) {
            cout << "NO" << nn;
            return;
        }
        for(int j = 0; j < n; j++ ) {
            int q = p +  j * a;
            check = q;
            if(mp[check] == 0) {
            cout << "NO" << nn;
            return;
         }
         mp[check]--;
      }

    }
    cout << "YES" << nn;

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
