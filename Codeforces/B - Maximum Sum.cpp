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

///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    ll n, k;
    cin >> n >> k;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];

    ll total = accumulate(all(v), 0LL);
       total %= MOD;
    ll sum = 0;
    ll mx_sub_sum = LONG_MIN;
    for(int i = 0; i < n; i++ )
    {
        sum = (sum + v[i]);
        if(sum >= mx_sub_sum)
        {
            mx_sub_sum = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    if(mx_sub_sum < 0)
    {
        mx_sub_sum = 0;
    }
    ll baki_sum = (total - mx_sub_sum) % MOD;
    for(int i = 0; i < k; i++)
    {
        mx_sub_sum = (mx_sub_sum + mx_sub_sum) % MOD;
    }
    ll ans = (mx_sub_sum + baki_sum + MOD ) % MOD;

    cout << ans % MOD << nn;


}
int32_t main()
{
    FastIO;

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--)
    {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
