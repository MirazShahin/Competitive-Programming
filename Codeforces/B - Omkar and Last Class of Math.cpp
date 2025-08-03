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
bool is_prime(int n) {


}
///_________________________________________________________________________________________///
void solve()
{
//    cout << lcm(2, 6);
   int n;
   cin >> n;
   int x = n;
   if((n & 1) == 0) {
     n >>= 1;
     cout << n << sp << x - n << nn;
   }
   else {
    int p = 0;
     for(int i = 2; i * i <= n; i++ ) {
        if(n % i == 0) {
            p = max(p, n / i);
        }
     }
     if(p == 0) {
        p++;
     }
     cout << p << sp << x - p << nn;
   }
}
int32_t main()
{
    FastIO;

    int test_case = 1;
    cin >> test_case;
    int Case = 0;
    while( test_case--) {
//    cout << "Case " << Case + 1 << ": ";
        solve();
        Case++;
    }

    return 0;
}
