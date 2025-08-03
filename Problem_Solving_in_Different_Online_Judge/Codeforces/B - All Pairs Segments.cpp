#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
#define nn  '\n'
using ll = long long; 
using namespace std; 

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
 
void solve() { 
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    vector<ll> w(q);
    for(int i = 0; i < q; i++ ) cin >> w[i];
    map<ll, ll> mp; 
    for(int i = 0; i < n; i++ ) {
        ll ln = (n - i - 1);
        ll piche = n - ln - 1;
        ll x = piche * (ln + 1);
        ll parbe = ln + x;
        mp[parbe]++;
    }
    for(int i = 0; i < n - 1; i++ ) {
        ll a = v[i];
        ll b = v[i + 1];
        if(b - a >= 2) {
            ll diff = (b - a) - 1; 
            ll len = n - i - 1;
            ll piche = i * len;
            ll parbe = len + piche;
            mp[parbe] += diff;
        }
    }
    for(int i = 0; i < q; i++ ) {
        cout << mp[w[i]] << " ";
    }
    cout << nn;
    
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
