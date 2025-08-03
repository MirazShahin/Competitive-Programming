 
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
 
const int N = 2e5 + 9;
int n,k;
int v[N];
bool K_th_not_divisible(int mid)
{
    return (mid - mid / n) >= k;

}
void solve()
{
    cin >> n >> k;
    int l = 0, r = 2e9, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(K_th_not_divisible(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << nn;

}
int32_t main()
{
    FastIO;

//    divisor_count();
    int test_case;
    cin>>test_case;

    while(test_case--) {
        solve();
    }

    return 0;
}
 
