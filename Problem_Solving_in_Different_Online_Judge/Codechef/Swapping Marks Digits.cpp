#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- ) {
	   string a, b;
	   cin >> a >> b;
	   if(a > b ) {
	       cout << "YES" << endl;
	   }
	   else {
	       string s = a;
	       string w = b;
	       reverse(s.begin(), s.end());
	       reverse(w.begin(), w.end());
	       if(s > b) {
	           cout << "YES" << endl;
	       }
	       else if(a > w) {
	           cout << "YES" << endl;
	       }
	       else if(s > w) {
	           cout << "YES" << endl;
	       }
	       else {
              cout << "NO" << endl;
	       }
	   }
	}
	return 0;

}
