#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

void solve() {
    int n, k;
    cin >> n >> k;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];

    int amar_goru = v[k - 1];
    int immidiate_big_pos = 0;
    for(int i = 0; i < k; i++) {
        if(amar_goru < v[i]) {
            immidiate_big_pos = i;
            break;
        }
    }
    vii b = v;
    int win = 0, ans = 0;
    swap(v[0], v[k - 1]);
    for(int i = 1; i < n; i++) {
        if(amar_goru < v[i])break;
        win++;

    }
    ans = max(ans, win);
    win = 0;
    swap(b[immidiate_big_pos], b[k - 1]);
    for(int i = immidiate_big_pos + 1; i < k; i++) {
        if(amar_goru < b[i]) break;
        win++;
    }
    if(immidiate_big_pos != 0){
       win++;
    }
    else {
        win = win;
    }
    ans = max(ans, win);
    cout << ans << nn;
}
int32_t main() {
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
