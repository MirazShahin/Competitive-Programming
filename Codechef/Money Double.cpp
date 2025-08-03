#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t-- ) {
        long long a, b;
        cin >> a >> b;
        if(a < 1000) {
            a += 1000;
            b--;
            for(int i = 0; i < b; i++ ) {
                a *= 2;
            }
            cout << a << endl;
        }
        else {
            for(int i = 0; i < b; i++ ) {
                a *= 2;
            }
            cout << a << endl;
        }
    }
}
