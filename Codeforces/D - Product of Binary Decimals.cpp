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

void solve()
{
    string s;
    cin >> s;
    int one = count(all(s), '1');
    int zero = count(all(s), '0');
    if(one + zero == sz(s)) {
        cout << "YES" << nn;
        return;
    }

    int n = stoi(s);
    int x = 0;
    while(1) {
        if(n == 1) break;
        if(n % 10 == 0) {
            n /= 10;
        }
        else if(n % 11 == 0) {
            n /= 11;
        }
        else if(n % 100 == 0) {
            n /= 100;
        }
        else if(n % 101 == 0) {
            n /= 101;
        }
        else if(n % 110 == 0 ) {
            n /= 110;
        }
        else if(n % 111 == 0) {
            n /= 111;
        }
        else if(n % 1000 == 0) {
            n /= 1000;
        }
        else if(n % 1010 == 0) {
            n /= 1010;
        }
        else if(n % 1011 == 0) {
            n /= 1011;
        }
        else if(n % 1001 == 0) {
            n /= 1001;
        }
        else if(n % 1100 == 0) {
            n /= 1100;
        }
        else if(n % 1101 == 0) {
            n /= 1101;
        }
        else if(n % 1110 == 0) {
            n /= 1110;
        }
        else if(n % 1111 == 0) {
            n /= 1111;
        }
        else if(n % 10000 == 0) {
            n /= 10000;
        }
        else if(n % 10001 == 0) {
            n /= 10001;
        }
        else if(n % 10011 == 0) {
            n /= 10011;
        }
        else if(n % 10010 == 0) {
            n /= 10010;
        }
        else if(n % 10100 == 0) {
            n /= 10100;
        }
        else if(n % 10101 == 0) {
            n /= 10101;
        }
        else if(n % 10110 == 0) {
            n /= 10110;
        }
        else if(n % 10111 == 0) {
            n /= 10111;
        }
        else if(n % 11101 == 0) {
            n /= 11101;
        }
        else if(n % 11111 == 0) {
            n /= 11111;
        }
        else if(n % 11110 == 0) {
            n /= 11110;
        }
        else if(n % 11100 == 0) {
            n /= 11100;
        }
        else if(n % 11000 == 0) {
            n /= 11000;
        }
        else if(n % 11001 == 0) {
            n /= 11001;
        }
        else if(n % 11010 == 0) {
            n /= 11010;
        }
        else if(n % 11011 == 0) {
            n /= 11011;
        }
        else {
            break;
        }
    }
    if(n == 1 ) {
        cout << "YES" << nn;
    }
    else {
        cout << "NO" << nn;
    }
//    cout << n << nn;
}
int32_t main()
{
    FastIO;
    Sieve();
    int test_case;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
