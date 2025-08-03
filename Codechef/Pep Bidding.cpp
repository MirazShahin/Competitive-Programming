


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
   int n;
   cin >> n;
   vii v(n), w(n);
   for(int i = 0; i < n; i++ ) cin >> v[i];
   for(int i = 0; i < n; i++ ) cin >> w[i];
   vii m(n), p(n);
   for(int i = 0; i < n; i++ ) cin >> m[i];
   for(int i = 0; i < n; i++ ) cin >> p[i];

   int sum_v = accumulate(all(v), 0);
   int sum_w = accumulate(all(w), 0);
   int sum_m = accumulate(all(m), 0);
   int sum_p = accumulate(all(p), 0);
   if(sum_v > sum_m and sum_w > sum_p) {
    cout << "A" << nn;
   }
   else if(sum_v < sum_m and sum_w < sum_p) {
    cout << "P" << nn;
   }
   else{
    cout << "DRAW" << nn;
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
