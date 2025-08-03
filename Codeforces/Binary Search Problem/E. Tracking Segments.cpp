#include <bits/stdc++.h>
using namespace std;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define int        long long
#define vll        vector<int>
#define vpp        vector<pair<int,int>>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "
#define sz(x)      x.size()

#define pi         3.1415926535897932384626433832795
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()

const int   MAX = 1e6 + 7;

///_________________________________MiRaZ_HoSsAiN_ShAhIn_________________________________________________///
int n, m;
vpp segment;
int  q;
vll query;
int good_array[MAX];
int prefix_sum[MAX];
bool x_er_man_minimum_koto_hole_good_hobe(int mid) {
    for (int i = 0; i < mid; i++ ) {
        good_array[query[i]] = 1;
    }

    for (int i = 1; i <= n; i++ ) {
        prefix_sum[i] = prefix_sum[i - 1] + good_array[i];
    }

    bool ok = 0;
    for (int i = 0; i < m; i++ ) {
        int left_element = segment[i].first;
        int right_element = segment[i].second;
        int minimum_need = (abs(right_element - left_element + 1) / 2 ) + 1; // segment size = (r-l+1)
        if (prefix_sum[right_element] - prefix_sum[left_element - 1] >= minimum_need) {
            ok = 1;
            break;
        }
    }
    for (int i = 0; i < mid; i++ ) {
        good_array[query[i]] = 0;
    }
    if (ok) return true;
    else return false;
}
void solve()
{
    cin >> n >> m;
    segment.clear();
    query.clear();

    for (int i = 0; i < m; i++) { 
        int l, r;
        cin >> l >> r;
        segment.push_back({l, r});
    }

    cin >> q;

    for (int i = 0; i < q; i++) { 
        int x;
        cin >> x;
        query.push_back(x);
    }

    int low = 0, high = q;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (x_er_man_minimum_koto_hole_good_hobe(mid)) {
            ans = mid;
            high = mid - 1;
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

    int test_case;
    cin >> test_case;
    int Case = 0;
    while ( test_case--) {
        // cout << "Case " << Case + 1 << ": ";
        solve();
        Case++;
    }

    return 0;
}
 
