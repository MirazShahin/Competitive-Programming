#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define int long long
#define vll vector<int>
#define nn '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b) / gcd(a,b)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
const int MAX=(int)1e6+5;
int Divisor[MAX];

///_________________________________MiRaZ_HoSsAiN_ShAhIn_________________________________________________///

void divisor_count()
{
    for (int i=1; i<MAX; i++)
    {
        for(int j=i; j<MAX; j+=i)
        {
            Divisor[j]++;
        }
    }
}

///_________________________________________________________________________________________///

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    if( n <= 2) cout << -1 << nn;
    else {
        int pos_1 = -1;
        int pos_3 = -1;
        for(int i = 0; i < n; i++) {
           if(v[i] == 1) {
             pos_1 = i;
           }
        }
        for(int i = 0; i < n; i++) {
           if(v[i] == 3) {
             pos_3 = i;
           }
        }
        swap(v[pos_1],v[pos_3]);
        for(int i = 0; i < n; i++ ) cout << v[i] << sp;
        cout << nn;
    }
}
int32_t main()
{
    FastIO;

    //divisor_count();
    int test_case;
    cin>>test_case;
    int Case = 0;
    while(test_case--) {
   // cout << "Case " << Case + 1 << ": \n";
        solve();
        Case++;
    }

    return 0;
}

