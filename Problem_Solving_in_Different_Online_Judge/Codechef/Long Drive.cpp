#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t;
     cin >> t;
     while(t-- ) {
         int a, b;
         cin >> a >> b;
         cout << ((((b * 10) - (a * 10)) + 100 - b - 1) / (100 - b)) << endl;
     }
}
