
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
    vii w, s;
    for(int i = 0; i < n; i++ ) {
        if(v[i] > 3) w.push_back(v[i]);
        else s.push_back(v[i]);
    }
    if(sz(w) == n) {
        int sum = accumulate(all(w), 0);
        cout << sum << nn;
    }
    else {
       sort(all(v));
       if(k == 1) {
         if(v[0] == 1) v[0] = 6;
         if(v[0] == 2) v[0] = 5;
         if(v[0] == 3) v[0] = 4;
         int sum = accumulate(all(v), 0);
         cout << sum << nn;
       }
       else if(k == 2) {
         if(v[0] == 1) v[0] = 6;
          if(v[0] == 2) v[0] = 5;
          if(v[0] == 3) v[0] = 4;
          if(v[1] == 1) v[1] = 6;
          if(v[1] == 2) v[1] = 5;
          if(v[1] == 3) v[1] = 4;
         int sum = accumulate(all(v), 0);
         cout << sum << nn;
       }
       else if(k == 3) {
          if(v[0] == 1) v[0] = 6;
          if(v[0] == 2) v[0] = 5;
          if(v[0] == 3) v[0] = 4;
          if(v[1] == 1) v[1] = 6;
          if(v[1] == 2) v[1] = 5;
          if(v[1] == 3) v[1] = 4;
          if(v[2] == 1) v[2] = 6;
          if(v[2] == 2) v[2] = 5;
          if(v[2] == 3) v[2] = 4;
          int sum = accumulate(all(v), 0);
         cout << sum << nn;
       }
       else {
           for(int i = 0; i < k; i++ ) {
                if(v[i] == 1) v[i] = 6;
                if(v[i] == 2) v[i] = 5;
                if(v[i] == 3) v[i] = 4;
             }
            int sum = accumulate(all(v), 0);
           cout << sum << nn;

       }
    }
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
