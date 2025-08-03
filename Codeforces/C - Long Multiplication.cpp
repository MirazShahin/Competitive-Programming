
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

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
   string a, b;
   cin >> a >> b;
   string ex_a = "";
   string ex_b = "";
   ex_a.push_back(a[0]);
   ex_b.push_back(b[0]);
   for(int i = 1; i < sz(a); i++) {
     char p = a[i];
     char q = b[i];
     char mn_char = min(p, q);
     char mx_char = max(p, q);
     if(ex_a >= ex_b) {
        ex_a += mn_char;
        ex_b += mx_char;
     }
     else {
        ex_a += mx_char;
        ex_b += mn_char;
     }
   }
   cout << ex_a << nn << ex_b << nn;
}
int32_t main()
{
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
