#include<bits/stdc++.h>
using namespace std;
const long long N = 1LL * 1e6 + 7;
long long v[N];
long long n, x;

bool h_koto(long long h) {
   long long sum = 0;
   for(int i = 0; i < n; i++ ) {
      if(h > v[i]) {
        sum += 1LL * (h - v[i]);
      }
   }
   return sum <= x;
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
    cin >> n >> x;
    for(int i  = 0; i < n; i++) cin >> v[i];
    sort(v, v + n);
    long long low = 0, high = 1e10;
    long long ans = 0;
    while(low <= high) {
        long long mid = (low + high) / 2;
        if(h_koto(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
    }

    return 0;
}

 
