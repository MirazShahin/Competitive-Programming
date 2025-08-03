#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

///Extension Header file----->>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/detail/standard_policies.hpp>

#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----Modular Arithmetic----<<<<<<<<<<<<<<<<<<<<<<<<<---------------

const  ll MOD = (ll) 1e9 + 7;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----The End----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
ll n, k;
const int N = 1e6;
vii v(N), w(N);
bool koyta_cookie_banano_jabe(ll mid) {

    ll counter = 0;
    for(int i = 0; i < n; i++ ) {
       int x = (v[i] * mid) - w[i];
       if(x > 0) {
          counter += x;
       }
       if(x > 1e9) {
        return false;
       }
    }
    return counter <= k;
}
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++ ) cin >> v[i];
    for(int i = 0; i < n; i++ ) cin >> w[i];

    int lo = 0, hi= 1e6;
    ll ans = 0;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(koyta_cookie_banano_jabe(mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    cout << ans << nn;

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
 
