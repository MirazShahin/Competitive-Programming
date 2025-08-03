#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t-- ) {
        long long n;
        cin >> n;
        if(n < 10) {
            cout << n * (n + 1) / 2 << endl;
        }
        else {
            long long x = n / 9;
            long long y = n % 9;
            long long m = 45LL * x;
            long long z = y * (y + 1LL) / 2;
            m += z;
            cout << m << endl;
        }
    }
}
