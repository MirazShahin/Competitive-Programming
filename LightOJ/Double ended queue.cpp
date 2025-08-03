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

///...(__________________________(__MS__MiRAZ_847)____________________________)...///
 
void solve() {
    int n, m;
    string s;
    int x;
    cin >> n >> m;
    deque<int> dq;
    for(int i = 0; i < m; i++ ) {
        cin >> s; 
        if(s == "pushLeft" or s == "pushRight") {
            cin >> x;
        }
        if((s == "pushLeft" or s == "pushRight") and (sz(dq) >= n)) {
            cout << "The queue is full" << nn;
        }
        else if((s == "popLeft" or s == "popRight") and sz(dq) == 0) {
            cout << "The queue is empty" << nn;
        }
        else if(s == "pushLeft") {
            dq.push_front(x);
            cout << "Pushed in left: " << x << nn;
            
        }
        else if(s == "pushRight") {
            dq.push_back(x);
            cout << "Pushed in right: " << x << nn;
            
        }
        else if(s == "popLeft") {
            int z = dq.front();
            dq.pop_front();
            cout << "Popped from left: " << z << nn;
        }
        else if(s == "popRight") {
            int z = dq.back();
            dq.pop_back();
            cout << "Popped from right: " << z << nn;
        }
        
    }
}
int32_t main() {
    FastIO; 

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
    cout << "Case " << Case << ": \n";
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
