
#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vll        vector<ll>
#define nn         '\n'
#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
using namespace std;
using ll = long long int;

///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    string a, b;
    cin >> a >> b;
    if(sz(a) != sz(b)) {
        cout << "No" << nn;
        return;
    }
    vector<int>v_ind_a;
    for(int i = 0; i < sz(a); i++ ) {
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') {
            v_ind_a.push_back(i);
        }
    }
    vector<int>v_ind_b;
    for(int i = 0; i < sz(b); i++ ) {
        if(b[i] == 'a' or b[i] == 'e' or b[i] == 'i' or b[i] == 'o' or b[i] == 'u') {
            v_ind_b.push_back(i);
        }
    }
    if(sz(v_ind_a ) != sz(v_ind_b)) {
        cout << "No" << nn;
        return;
    }
    if(v_ind_a.empty() and v_ind_b.empty()) {
        cout << "Yes" << nn;
        return;
    }
    int sum_a = accumulate(all(v_ind_a),0LL);
    int sum_b = accumulate(all(v_ind_b),0LL);

    if(sum_a == sum_b ) cout << "Yes" << nn;
    else cout << "No" << nn;


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
