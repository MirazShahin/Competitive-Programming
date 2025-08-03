#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()


using namespace std;
using ll = long long int;

const int N = 111;
int cnt[N];
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
   int n, m;
   cin >> n >> m;
   vector<pair<int,int>>p;
   vii v;
   while(m--) {
       int mx = -1;
       int id = -1;
       for(int i = 0; i < n; i++ ) {
          int x;
          cin >> x;
          if(mx == x) continue;
          else if(mx < x) {
             mx = x;
             id = i ;
         }
       } cnt[id]++;
   }
   int mxx = -1;
   int idx = -1;
   for(int i = 0; i < n; i++ ) {
//     cout << cnt[i] << sp;
     if(mxx < cnt[i]) {
        mxx = cnt[i];
        idx = i + 1;
     }
   }
   cout << idx << nn;


}
int32_t main()
{
    FastIO;

    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
