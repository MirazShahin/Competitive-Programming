#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- ) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int rr = 0;
	    int ss = 0;
	    int pp = 0;
	    for(int i = 0; i < s.size(); ) {
	        if(s.substr(i, 2) == "RR") {
	            rr++;
	            i += 2;
	        }
	        else {
	            i++;
	        }
	    }
	    for(int i = 0; i < s.size(); ) {
	        if(s.substr(i, 2) == "SS") {
	            ss++;
	            i += 2;
	        }
	        else {
	            i++;
	        }
	    }
	    for(int i = 0; i < s.size(); ) {
	        if(s.substr(i, 2) == "PP") {
	            pp++;
	            i += 2;
	        }
	        else {
	            i++;
	        }
	    }
	    int ans = s.size() - (rr + pp + ss);
	    cout << ans << endl;
	}

}
