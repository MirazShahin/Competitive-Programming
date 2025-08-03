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

ll boss_k_marte_minimum_koto_attack_lagbe(ll mid, ll attacks, vll &damage, vll &cooldown) {
     ll sum = 0;
     for(int i = 0; i < attacks; i++ ) {
        sum += 1LL * (mid / cooldown[i]) * damage[i];
     }
     return sum;
}
void solve() {
    ll boss, attacks;
    cin >> boss >> attacks;
    vll damage(attacks), cooldown(attacks);
    for(int i = 0; i < attacks; i++ ) cin >> damage[i];
    for(int i = 0; i < attacks; i++ ) cin >> cooldown[i];
    
    boss -= accumulate(all(damage), 0LL);
    if(boss  <= 0) {
        cout << 1 << nn;
        return;
    }
    ll low = 0, high = 1e11;
    ll ans = 0;
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(boss -  boss_k_marte_minimum_koto_attack_lagbe(mid, attacks, damage, cooldown) <= 0) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans + 1 << nn;
   
    /*
       Total complexity is O(attacks * log(attacks)) 
                           =  1e5 * log(1e5) 
                           =  5e5 iteration
    */
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
