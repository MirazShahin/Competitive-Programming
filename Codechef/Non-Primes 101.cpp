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
///__________________________________The End__________________________________|||
bitset<N> marked;
vii  prime; 
void Sieve()
{
    for(int i = 4; i <= N; i+=2) {
        marked[i] = 1;
    }
    for(int i = 3; i * i <= N; i+= 2) {
        if(!marked[i])
        for(int j = i * i; j <= N; j += (i << 1)) {
            marked[j] = 1;
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i+=2) {
        if(!marked[i]) {
            prime.push_back(i);
        }
    }
}
bool isPrime(ll n) {
    if(n < 2) return false;
    return !marked[n];
}

///...(__________________________(__MS__MiRAZ_847)____________________________)...///
void solve() {
    /*
       Date: 14 - 08 - 2024
    */
    int n; cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i]; 
    vector<pair<int, int>> even, odd;
    for(int i = 0; i < n; i++) {
        if((v[i] & 1)) odd.push_back({v[i], i});
        else even.push_back({v[i], i});
    }
    if(sz(even) >= 2) {
        cout << even[0].second + 1 << " " << even[1].second + 1 << nn;
        return;
    }
    if(sz(odd) >= 2) {
        sort(all(odd));
        if(odd[sz(odd) - 1].first != 1) {
            cout << odd[0].second + 1 << " " << odd[sz(odd) - 1].second + 1 << nn;
            return;
        }
        else {
            if(sz(odd) == n) {
                cout << -1 << nn;
            }
            else {
                bool check = 0;
                int idx = -1;
                for(auto [it, x] : even) {
                    if(isPrime(it + 1) == 0) {
                        check = 1;
                        idx = x;
                        break;
                    }
                }
                if(check) {
                   cout << odd[0].first + 1 << " " << idx + 1 << nn;
                }
                else {
                    cout << -1 << nn;
                }
                return;
            }
        }
        return;
    } 
    for(int i = 0; i < 2; i++ ) {
        for(int j = i + 1; j < 2; j++ ) {
            if(isPrime(v[i] + v[j]) == 0) {
                cout << i + 1 << " " << j + 1 << nn;
                return;
            }
        }
    }
    cout << -1 << nn;

}
int32_t main() {
    FastIO;
    Sieve(); 
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
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
