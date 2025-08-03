

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
    string s;
    cin>>s;
    vll id;
    ll one=0;
    ll zero=0;
    for(ll i=0;i<n;i++) {
        if(s[i]=='1') {
            one++;
        }
        else zero++;;
    }
    if(one==n) {
        for(ll i=0;i<n-1;i++) {
            cout<<"IDK\n";
        }
        yes;
    }
    else if(zero==n) {
        for(ll i=0;i<n;i++) {
           no;
        }

    }
    else{

        ll indx=0;
        for(ll i=0;i<n;i++) {
            if(s[i]=='0') {
                indx=i;
                break;
            }
        }
       vector<pair<ll,string>>pr;
        for(ll i=0;i<indx;i++) {
           cout<<"IDK\n";
        }
        for(ll i=indx;i<n;i++) {
           no;
        }
    }
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
