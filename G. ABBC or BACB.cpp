//Problem Link : https://codeforces.com/problemset/problem/1873/G

//char *p; p=strstr(x , "any_string to find");
//*max_element(v.begin() , v.end())

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair

bool is_prime(ll n){for(ll i=2 ; i*i<=n ; i++){if(n%i==0){return 0;}}return 1;}
bool is_square(ll x){ll sq=sqrt(x);return sq*sq==x;}
ll lcm(ll num1, ll num2) {return (num1*num2)/__gcd(num1, num2);}
//divisors of a number ==> for(ll i=2 ; i*i<=n ; i++){if(n%i==0){divisors.push_back(i);if(n/i != i){divisors.push_back(n/i);}}}

void solve(){
    ll n , m , d;
    cin>>n>>m>>d;

    vector<ll>v;
    for(ll i = 1 ; i <= m ; i++){
        ll x;
        cin>>x;
        v.pb(x);
    }

    vector<ll>occp(n + 1) = {0};

    for(ll i = 1 ; i <= n ; i++){
        if(i = 1) v[i] = 1;
    }

}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
