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
 
void solve() { 
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];

    int q; cin >> q;
    while(q-- ) {
        string s; cin >> s;
        if(sz(s) != n) {
            cout << "NO\n";
            continue;
        }
        map<char, vector<int>> mp1;
        for(int i = 0; i < sz(s); i++ ) {
            mp1[s[i]].push_back(i);
        }
        bool check1 = 1;
        for(auto &[it, cnt] : mp1) {
            for(int j = 0; j < sz(cnt) - 1; j++ ) {
                if(v[cnt[j]] != v[cnt[j + 1]]) {
                     check1 = 0;
                }
            } 
        }
        if(!check1) {
            cout << "NO\n";
            continue;
        }
        map<int, vector<int>> mp2;
        for(int i = 0; i < n; i++ ) {
            mp2[v[i]].push_back(i);
        }
        bool check2 = 1;
        for(auto &[it, cnt] : mp2) {
            for(int j = 0; j < sz(cnt) - 1; j++ ) {
                if(s[cnt[j]] != s[cnt[j + 1]]) {
                    check2 = 0;
                }
            } 
        }
        if(!check2) cout << "NO\n";
        else cout << "YES\n";
        continue;
    } 
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
