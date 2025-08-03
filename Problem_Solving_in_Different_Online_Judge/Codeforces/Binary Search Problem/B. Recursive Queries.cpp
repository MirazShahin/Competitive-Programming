#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define int long long
#define vll vector<int>
#define nn '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b) / gcd(a,b)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
 
int f(int n)
{
  int prod = 1;
  while(n > 0) {
    int rem = n % 10;
    if(rem != 0) {
        prod *= rem;
    }
    n/=10;
  }
  return prod;
}
int g(int n)
{
    if(n < 10) return n;
    return g(f(n));
}
const int N = (int)1e6 + 9;
vll G(N);
vll v[10];
void solve()
{
    for(int i = 1; i <= N; i++) {
        G[i] =1LL * g(i);
    }
 
   for(int i = 1; i <= N; i++ ) {
     v[G[i]].push_back(i);
   }
   int query;
   cin >> query;
   while(query--) {
    int l, r, k;
    cin >> l >> r >> k;
    int ans = upper_bound(v[k].begin(),v[k].end(),r) - lower_bound(v[k].begin(),v[k].end(),l);
    cout << ans << nn;

   }

}
int32_t main()
{
    FastIO;

//   divisor_count();
//    int test_case;
//    cin>>test_case;
//
//    while(test_case--) {
        solve();
//    }

    return 0;
}
 
