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
 

int k, x;
int get_sum(int n) {
    return n * (n + 1) / 2;
}
int get_k_th_sum(int l, int r) {
    return get_sum(r) - get_sum(l - 1);
}
bool is_chat_ban(int mid) {
    int sum = 0;
    if(mid <= k) {
        sum = get_k_th_sum(1, mid);
    }
    else {
        sum = get_k_th_sum(1,k) + get_k_th_sum(k - (mid - k), (k - 1));
    }
    return sum >= x;

}
void solve()
{
    cin >> k >> x;
    int low = 1, high = 2 * k - 1;
    int ans = 2 * k - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(is_chat_ban(mid)) {
            ans = mid;
            high = mid -  1;
        }
        else {
            low = mid + 1;
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
 
