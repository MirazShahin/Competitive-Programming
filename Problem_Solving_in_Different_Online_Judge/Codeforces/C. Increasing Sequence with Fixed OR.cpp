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

const  ll MOD = (ll) 1e9 + 7;
const ll N = (ll) 1e6 + 7;
// Direction Array...
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

//Modular Arithmetic__________________________________________
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

//debug_______________________________________________________
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
// #else
// #define dbg(args...)
 
///...(___________________________(__MS__MiRAZ_847)____________________________)...///
string bit(ll n) {
    string s;
    while(n > 0) {
        int rem = n % 2;
        s.push_back(rem + '0');
        n /= 2;
    }
    reverse(all(s));
    return s;
}
ll invertBits(ll num)  {     
     return ~num;
} 
ll binaryToDecimal(string &s) { 
    ll dec_value = 0; 
    ll base = 1;
    for (int i = sz(s) - 1; i >= 0; i--) {
        if (s[i] == '1') {
            dec_value += base;
        }
        base = base * 2;
    }
 
    return dec_value;
}
void solve() {
    /*
       Date: 17 - 07 - 2024
    */ 
    ll n;
    cin >> n;
    if(n == 1) {
        cout << 1 << nn << 1 << nn;
        return;
    }
    string s = bit(n);
    vll ans;
    for(ll i = 0; i < 1LL * sz(s); i++ ) {
        if(s[i] == '1') {
           s[i] = (invertBits(s[i] - '0') + '0');
           ans.push_back(binaryToDecimal(s));
           s[i] = (invertBits(s[i] - '0') + '0');
        }
    }
    ans.push_back(n);
    sort(all(ans));
    if(ans[0] == 0) {
        reverse(all(ans));
        ans.pop_back();
        reverse(all(ans));
    }
    cout << sz(ans) << nn;
    for(auto u : ans ) cout << u << " ";
    cout << nn;
}
int32_t main() {
    FastIO;  
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        // cout << "Case " << Case << ": ";
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
