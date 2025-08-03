
#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);


#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define YES        cout << "YES\n"
#define NO         cout << "NO\n"
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define pi         3.1415926535897932384626433832795
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    ll n;
    cin >> n;

    if((n & 1) == 0 ) {
        n /= 2;
        ll odd_sum = (n) * (n);  /// sum of odd numbers = n^2
        odd_sum *= (-1);
        ll even_sum = n * (n + 1); /// sum of even numbers = n(n + 1);
        ll ans = odd_sum + even_sum ;
        cout << ans << nn;
    }
    else {
        n /= 2;
        n++;
        ll odd_sum = (n) * (n);  /// sum of odd numbers = n^2
        odd_sum *= (-1);
        ll even_sum = n * (n + 1); /// sum of even numbers = n(n + 1);
        ll ans = odd_sum + even_sum ;
        cout << -1 * ans << nn;
    }

}
int32_t main()
{
    FastIO;
    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
