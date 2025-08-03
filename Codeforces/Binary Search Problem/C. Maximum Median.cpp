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
 

const int  N =(int) 2e5 + 9;
int n, k;
int v[N];

bool maximum_median(int mid) {
  int minimum_operation = 0;
  for(int i = (n / 2) + 1 ; i <= n; i++) {
    if(v[i] < mid) {
        minimum_operation += (mid - v[i]);
    }
  }
  return minimum_operation <= k;

}
void solve()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> v[i];
    sort(v + 1, v + n + 1);
    int low = 1, high = 2e9, ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(maximum_median(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans << nn;
}
int32_t main()
{
    FastIO;

    //divisor_count();
//    int test_case;
//    cin>>test_case;
//
//    while(test_case--) {
        solve();
//    }

    return 0;
}
 
