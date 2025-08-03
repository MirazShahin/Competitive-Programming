#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- ) {
	    int a, b;
	    cin >> a >> b;
	    long long x = b * (b + 1) / 2;
	    x += (b - 1);
	    if(x <= a) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}
