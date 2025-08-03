
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
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int x, y;
    cin >> x >> y;
    int a, b;
    cin >> a >> b;
    if(x == 0 and y == 0) {
        cout << 0 << nn;
        return;
    }

    if(x == 0 and y > 0) {
         cout << 1LL * (y - x) * a << nn;
         return;
    }
    else if(y == 0 and x > 0) {
        cout << 1LL * (x - y) * a << nn;
        return;
    }
    else if(x > 0 and y > 0) {
        if(a + a <= b) {
            cout << 1LL * (x + y) * a << nn;
        }
        else if(a + a > b) {
           ll one = 1LL * abs(x - y) * a;
           ll two = 1LL * min(x, y) * b;
           cout << 1LL * one + two << nn;
        }
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
