 
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
    int n, q;
    cin >> n >> q;
    vll v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    sort(rall(v));
    vll prefix_sum(n);
    prefix_sum[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum [i - 1] + v[i];
    }
 
       while(q--){
        int x;
        cin >> x;
        int low = 0;
        int high = n;
        while (low < high){
            int mid = low + (high - low) / 2;
            if (x <= prefix_sum[mid]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        if(low < n && prefix_sum[low] < x){
            low++;
        }
        if(low == n) cout << -1 << nn;
        else cout << low + 1 << nn;
    }
}
int32_t main()
{
    FastIO;

    // divisor_count();
    int test_case;
    cin>>test_case;

    while(test_case--){
        solve();
    }

    return 0;
}
 
