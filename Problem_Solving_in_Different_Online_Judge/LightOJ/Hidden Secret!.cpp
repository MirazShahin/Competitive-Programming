#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;
 
void solve() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(int i = 0; i < sz(a); i++ ) a[i] = tolower(a[i]);
    for(int i = 0; i < sz(b); i++ ) b[i] = tolower(b[i]);
    string newA, newB;
    for(int i = 0; i < sz(a); i++ ) {
        if(a[i] == ' ') continue;
        newA.push_back(a[i]);
    }
    for(int i = 0; i < sz(b); i++ ) {
        if(b[i] == ' ') continue;
        newB.push_back(b[i]);
    }
    sort(all(newA));
    sort(all(newB));
    if(newA == newB) cout << "Yes" << nn;
    else cout << "No" << nn;   
}
int32_t main() {
    FastIO; 
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    string a;
    getline(cin, a);
    while(test_case--) {
    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
