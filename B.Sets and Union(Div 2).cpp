//Problem Link : https://codeforces.com/contest/1882/problem/B

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
    vector<set<ll>>v(n);
    set<ll>s;

    for(ll i = 0 ; i < n ; i++){
        set<ll>z;
        ll m;
        cin>>m;
        for(ll j = 0 ; j < m ; j++){
            ll x;
            cin>>x;
            s.insert(x);
            z.insert(x);
        }
        v[i] = z;
    }


    int mx = 0;
    for(auto i : s){
        set<ll>r;
        for(auto x : v) if(x.count(i) == 0) r.insert(x.begin() , x.end());
        int p = r.size();
        mx = max(mx , p);
    }
    cout<<mx<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
