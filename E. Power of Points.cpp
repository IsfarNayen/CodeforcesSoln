//Problem Link :

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

    vector<pair<ll , ll>>v(n);

    for(ll i = 0 ; i < n ; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin() , v.end());

    ll val = 0;
    for(ll i = 0 ; i < n ; i++) val += (v[i].first - v[0].first + 1);

    vector<ll>ans(n);

    ans[v[0].second] = val;

    for(ll i = 1 ; i < n ; i++){
        val -= (n - i)*(v[i].first - v[i - 1].first);
        cout<<val<<" ";
        val += i*(v[i].first - v[i - 1].first);
        cout<<val<<" ";
        ans[v[i].second] = val;
        cout<<endl;
    }
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
