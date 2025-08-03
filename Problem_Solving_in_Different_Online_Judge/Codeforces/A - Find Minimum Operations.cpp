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

ll largest_power(ll n, ll k) {
   ll cnt = 1;
   while(cnt * k <= n) cnt *= k;
   return cnt;
} 
void solve() { 
    ll n, k; cin >> n >> k;
    if(k == 1) {
        cout << n << nn;
        return;
    }
    if(k > n) {
        cout << n << nn;
        return;
    }
    ll cnt = 0;
    while(n >= k) {
        n -= largest_power(n, k);
        cnt++;
    }
    cout << cnt + n << nn;
}
int32_t main() { 
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
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
