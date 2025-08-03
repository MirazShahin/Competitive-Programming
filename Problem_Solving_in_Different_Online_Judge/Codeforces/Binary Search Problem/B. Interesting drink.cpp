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

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    int query;
    cin >> query;
    while(query--) {
        int x;
        cin >> x;
        cout << upper_bound(all(v),x) - v.begin() << nn;
    }
}
int32_t main()
{
    FastIO;

    // divisor_count();
//    int test_case;
//    cin>>test_case;
//
//    while(test_case--) {
    solve();
//    }

    return 0;
}
 
