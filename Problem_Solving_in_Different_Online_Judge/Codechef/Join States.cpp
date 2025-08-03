#include <bits/stdc++.h>
using namespace std;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define int        long long
#define vll        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "YES\n"
#define no         cout << "NO\n"
#define sp         " "

#define pi         3.1415926535897932384626433832795
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()

const int    MAX = 2 * 1e6+7;
int          Divisor[MAX];
int          factorial[MAX];
const int    mod = 1000000007;
///_________________________________MiRaZ_HoSsAiN_ShAhIn_________________________________________________///
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vll v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    int gr = 0;
    int sum = 0;
    for(int i = 0; i < n; i++ ) {
        sum += v[i];
        if(sum >= m) {
            gr++;
            sum = 0;
        }
    }
    cout << gr << nn;
}
int32_t main()
{
    FastIO;

    //divisor_count();
    pre_calc_fact();

    int test_case;
    cin >> test_case;
    int Case = 0;
    while( test_case--) {
   // cout << "Case " << Case + 1 << ": ";
        solve();
        Case++;
    }

    return 0;
}

