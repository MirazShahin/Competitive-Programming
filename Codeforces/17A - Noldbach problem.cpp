#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
#define nn  '\n'
using ll = long long; 
using namespace std; 
#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

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
const int MX = 1000; 
vector<int> prime;
bitset<MX + 5> mark; 
 
void Sieve() {
    int limit = sqrt(MX);
    for (int i = 3; i <= limit; i += 2) {
        if (!mark[i] and (i * i) <= MX) {
            for (int j = i * i; j <= MX; j += (i << 1)) {
                mark[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= MX; i += 2) {
        if (!mark[i]) prime.push_back(i);
    }
}   
void solve() { 
    int n, k; cin >> n >> k;
    int sum = 0;
    bool check = 1;
    vector<int> v;
    for(int i = 0; i < n; i++ ) {
        if(prime[i] > n) break; 
        v.push_back(prime[i]);
    }
    vector<int> w = v;
    int cnt = 0;
    // vector<int> 
    while(!v.empty()) {
        int x = v.back();
        v.pop_back();
        for(int i = 0; i < sz(w) - 1; i++ ) {
           if(w[i] + w[i + 1] + 1 == x) {
              // cout << w[i] << " " << w[i + 1] << nn;
              cnt++;
           }
        } 
    }
    if(cnt >= k) cout << "YES\n";
    else cout << "NO\n";
    // cout << cnt << nn;

}
int32_t main() { 
    FastIO;
    Sieve();
    int test_case = 1;
    //cin >> test_case; 
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
