


#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define ll long long
#define dd double
#define vll vector<ll>
#define nn '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

#define pb push_back
#define ppb pop_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
///_________________________________MiRaZ_HoSsAiN_ShAhIn_________________________________________________///
using namespace std;
const ll MAX=(ll)1e6+5;
ll Divisor[MAX];
ll MOD=1e9+7;

 void add()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>mp;
    for(ll i=0;i<n;i++) {
        mp[s[i]]++;
    }
    ll ml=1;
    for(auto [u,v]:mp) {
        ll ans=v+1;
        ml=(ml*ans)%MOD;
    }
    cout<<(ml-1)<<nn;
}
int main()
{
    optimize();
//    divisor_count();
    long long t;
    cin>>t;
    while(t--){
        add();
    }

    return 0;
}
