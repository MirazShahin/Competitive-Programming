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

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----Modular Arithmetic----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
const  ll MOD = (ll) 1e9 + 7;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
 
///...(__________________________(__MS__MiRAZ_847)____________________________)...///

void solve() {
    int n;
    cin >> n;
    vector<pair<string, ll>> pr;
    map<ll, ll> mp;
    while(n-- ) {
        string s;
        int a, b, c;
        ll curr_volume = 1;
        cin >> s >> a >> b >> c;
        curr_volume  = 1LL * a * b * c;
        pr.push_back({s, curr_volume});
        mp[curr_volume]++;
    }
    ll volume1 = 0;
    ll volume2 = 0;
    for(auto [u, it] : mp ) {
        if(it == 1) {
            volume1 = u;
            break;
        }
    }
    for(auto [u, it] : mp ) {
        if(it == 1) {
            volume2 = u;
        }
    }
    string people1, people2;
    for(auto [u, it] : pr) {
        if(it == volume1) {
            people1 = u;
            break;
        }
    }
    for(auto [u, it] : pr) {
        if(it == volume2) {
            people2 = u;
            break;
        }
    }
    if(people1.empty() or people2.empty()) {
        cout << "no thief" << nn;
    }
    else {
        if(volume1 > volume2) {
            cout << people1 << " took chocolate from " << people2 << nn;
        }
        else {
            cout << people2 << " took chocolate from " << people1 << nn;
        }
    }

}
int32_t main() {
    FastIO; 

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
     cout << "Case " << Case << ": ";
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
