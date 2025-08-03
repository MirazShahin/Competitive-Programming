


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

//void divisor_count() {
//    for (int i=1;i<MAX;i++) {
//        for(int j=i;j<MAX;j+=i) {
//            Divisor[j]++;
//        }
//    }
//}

ll sum_of_n(ll n) {
  return (n*(n+1))/2;
}

bool isVowel(char c){
    if(c=='A' or c=='E' or c=='I' or  c=='O' or c=='U' ) return true;
    else return false;
}
 void add()
{
    string s;
    cin>>s;
    string vv="CODETOWN";
    bool f=1;
    for(ll i=0;i<s.size();i++) {
        if(isVowel(s[i])!=isVowel(vv[i])) f=0;
    }
    if(f) yes;
    else no;
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


