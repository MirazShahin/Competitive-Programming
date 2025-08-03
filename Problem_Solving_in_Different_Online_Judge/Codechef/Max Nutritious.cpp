

#include <bits/stdc++.h>
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define ll long long
#define vll vector<ll>
#define nn '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b) / gcd(a,b)

#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

void add()
{
    ll n;
    cin>>n;
    vll fruit(n);
    vll nutri(n);
    for(ll i=0;i<n;i++) cin>>fruit[i];
    for(ll i=0;i<n;i++) cin>>nutri[i];
    //vector<pair<ll,ll>>pr;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++) {
        mp[fruit[i]]=max(mp[fruit[i]],nutri[i]);
    }
    ll sum=0;
    for(auto [u,v]:mp) {
        sum+=v;
    }
    cout<<sum<<nn;

}
int main()
{
    optimize();

//   divisor_count();
    ll t;
    cin>>t;
    while(t--){
    add();
    }

    return 0;
}

