// Problem link ==> https://codeforces.com/contest/1674/problem/D

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
    ll n;
    cin>>n;

    vector<ll>v(n);

    for(ll &x : v) cin>>x;

    ll i = 0 , j = 1;
    if(n%2) i = 1 , j = 2;

    for(; j < n ; i += 2 , j += 2) if(v[i] > v[j]) swap(v[i] , v[j]);


    if(is_sorted(v.begin() , v.end())) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main(){
    ISFAR();
    ll cnt = 0;
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
