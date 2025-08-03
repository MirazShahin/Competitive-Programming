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
      21 - 06 - 2024  
    */
    ll a, b;
    cin >> a >> b;
    if(a > b) {
        swap(a, b);
    }
    int step = 0;
    while(a * 8 <= b) {
        a *= 8;
        step++;
    }
    while(a * 4 <= b) {
        a *= 4;
        step++;
    }
    while(a * 2 <= b) {
        a *= 2;
        step++;
    }
    if(a != b) {
        cout << -1 << nn;
    } 
    else {
        cout << step << nn;
    }
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
