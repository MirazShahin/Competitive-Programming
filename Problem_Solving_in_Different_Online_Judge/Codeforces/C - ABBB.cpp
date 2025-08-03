#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long;
///...(__________________________(__MS__MiRAZ_847)____________________________)...///
  
void solve() {
    /*
      Date: 22 - 06 - 2024  
    */
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < sz(s); i++ ) {
        if(s[i] == 'A') st.push(s[i]);
        else {
          if(sz(st) >= 1) st.pop();
           else st.push(s[i]); 
         //  dbg(sz(st));
        }
    }
   cout << sz(st) << nn;
    
 }   
int32_t main() { 
    FastIO; 
    
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while (test_case--) {
        solve();
        Case++;
    }

    return 0;
}

/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
