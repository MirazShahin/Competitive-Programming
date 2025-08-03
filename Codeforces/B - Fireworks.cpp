#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define mpc        map<char,int>
#define mpi        map<int,int>
#define scc        set<char>
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define YES        cout << "YES\n"
#define NO         cout << "NO\n"
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define pi         3.1415926535897932384626433832795
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


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

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----The End----<<<<<<<<<<<<<<<<<<<<<<<<<---------------

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll A = (a + c) / a;
    ll B = (b + c) / b;

    cout << A + B << nn;
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
