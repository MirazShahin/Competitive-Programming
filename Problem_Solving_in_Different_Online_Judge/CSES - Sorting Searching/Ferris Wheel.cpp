

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
    int number_of_child, gondolas_weight;
    cin >> number_of_child >> gondolas_weight;
    vii weight(number_of_child);
    for(int i = 0; i < number_of_child; i++ ) cin >> weight[i];
    sort(all(weight));
    int minimum_gondola = 0;
    int left = 0;
    int right = number_of_child - 1;
    while(left <= right) {
        if(weight[left] + weight[right] <= gondolas_weight) {
            left++;
            right--;
            minimum_gondola++;
        }
        else if(weight[left] + weight[right] > gondolas_weight){
            right--;
            minimum_gondola++;
        }
    }
    cout << minimum_gondola << nn;
}
int32_t main() {
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
