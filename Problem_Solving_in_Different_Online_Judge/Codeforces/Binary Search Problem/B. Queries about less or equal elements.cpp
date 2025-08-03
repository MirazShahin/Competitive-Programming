#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define vll vector<ll>
#define vst vector<str>
#define nn '\n'
#define gcd(a,b)  __gcd(a,b)
#define	lcm(a,b)  (a*b)/gcd(a,b)

#define pb push_back
#define ppb pop_back
#define yes cout << "YES\n"
#define no cout<<"NO\n"
#define sp  " "
#define pi 3.1415926535897932384626433832795

#define all(x)  (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
 
using namespace std;
 
void result()
{
    ll n,m;
    cin>>n>>m;
    vll v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    while(m--){
        ll x;
        cin>>x;
        auto it=upper_bound(all(v),x);
        cout<<it-v.begin()<<sp;
    }
    cout<<nn;

}
int main()
{
    optimize();
 
    result();

    return 0;
}
 
