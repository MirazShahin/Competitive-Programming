#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    if(n == 3 and n == 4)  {
	        cout << "YES\n";
	        return 0;
	    }
	    if(n == 1 or n == 2 or n == 5) cout << "NO\n";
	    else cout << "YES\n";
	}
	
	return 0;
}
