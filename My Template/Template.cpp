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
const int N = 1e6;
bitset < N + 5 > mark;
vector<ll>primes;
int Divisor[N];
int Divisor_sum[N];

// Min heap declaration___________________________
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; 

void divisor_count() {
    for (int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            Divisor[j]++;
        }
    }
}
void divisor_sum() {
    for (int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            Divisor_sum[j] += i;
        }
    }
}

void sieve() {
    int sq = sqrt(N);
    for (int i = 4; i <= N; i += 2) {
        mark[i] = true;
    }
    for (int i = 3; i <= sq; i += 2) {
        if (!mark[i]) {
            for (int j = i * i; j <= N; j += (i << 1)) {
                mark[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!mark[i])
            primes.push_back(i);
    }
}
bool isPrime(int n) {
    if (n < 2) return false;
    return !mark[n];
}
bool isPrime(ll n) {
    if(n < 2) return false;
    return !marked[n];
}
string string_er_biyog(string &a, string &b) {
    string ans;
    int carry = 0;
    int a_len = (int) a.size();
    int b_len = (int) b.size();
    for (int i = 0; i < a_len; ++i) {
        int a_digit = a[a_len - 1 - i] - '0';
        int b_digit = (i < b_len) ? b[b_len - 1 - i] - '0' : 0;
        int sub = a_digit - b_digit - carry;
        if(sub < 0) {
            sub += 10;
            carry = 1;
        }
        else {
            carry = 0;
        } 
        ans.push_back(sub + '0');
    } 
    while(ans.size() > 1 and ans.back() == '0') {
        ans.pop_back();
    } 
    reverse(ans.begin(), ans.end());
    return ans;
}

///...(__________________________(__MS__MiRAZ_847)____________________________)...///
void solve() {
    /*
      Date:__________
    */
    // Code is here_______
    
}
int32_t main() {
    FastIO;
    Sieve();
    divisor_count();
    divisor_sum();
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
