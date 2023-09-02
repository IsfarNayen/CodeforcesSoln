//Problem Link : https://codeforces.com/problemset/problem/1729/D

//char *p; p=strstr(x , "any_string to find");
//*max_element(vect.begin() , vect.end())

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
    vector<ll> s(n) , b(n) , a;

    for(ll &x : s) cin>>x;
    for(ll &x : b) cin>>x;

    for(ll i = 0 ; i < n ; i++) a.pb(b[i] - s[i]);

    sort(a.begin() , a.end());

    //using two pointer
    ll cnt = 0;
    for(ll i = 0 , j = n - 1 ; i < j ; ){
        if(a[j] + a[i] >= 0){
            cnt++;
            i++;
            j--;
        }
        else i++;
    }

    cout<<cnt<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
