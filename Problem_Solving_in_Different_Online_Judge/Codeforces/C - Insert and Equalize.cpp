#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<long long>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(abs(a),abs(b))
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
   ll n;
   cin >> n;
   vll v(n);
   for(int i = 0; i < n; i++ ) cin >> v[i];
   sort(all(v));

   ll GCD_ = 0;
   for(int i = 1; i < n; i++ ) {
      ll curr_diff = abs(v[i] - v[i - 1]);
      GCD_ = gcd(curr_diff, GCD_);
   }
   ll ans = 0;
   for(int i = 1; i < n; i++ ) {
      ll curr_diff = abs(v[n - 1] - v[i - 1]);
      curr_diff /= GCD_;
      ans += curr_diff;
   }

   bool check = 0;
   for(int i = n - 1; i >= 0; i-- ) {
      ll curr_diff = v[i] - v[i - 1];
      if(curr_diff > GCD_) {
        check = 1;
        ans += (n - i);
        break;
      }
   }
   if(!check ) ans += n;
   cout << ans << nn;
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
