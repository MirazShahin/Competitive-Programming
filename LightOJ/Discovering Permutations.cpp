

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
    string s;
    for(int i = 1; i <= n; i++ ) {
        s.push_back(char(i + 64));
    }
    int counter = 0;
    do{
      cout << s << nn;
      counter++;
    }
    while(next_permutation(all(s)) and counter < k);
}
int32_t main()
{
    FastIO;

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
    cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
