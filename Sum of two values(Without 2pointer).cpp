//Problem Link :

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define el '\n'

//All functions writtern here is in zero based indexing

int MOD = 1e9 + 7;
bool is_prime(ll n){if(n == 1) return 0; for(ll i=2 ; i*i<=n ; i++){if(n%i==0){return 0;}}return 1;}
bool is_square(ll x){ll sq=sqrt(x);return sq*sq==x;}
ll lcm(ll num1, ll num2) {return (num1*num2)/__gcd(num1, num2);}


//divisors of a number ==> for(ll i=2 ; i*i<=n ; i++){if(n%i==0){divisors.push_back(i);if(n/i != i){divisors.push_back(n/i);}}}
//char *p; p=strstr(x , "any_string to find");
// int n = stoi(string)
// dp.assign(dp.size() , -1);

//prime divisors of a number
vector<ll>prime_div(ll n){
    vector<ll>prime;
    for(ll i = 2 ; i * i <= n ; i++) if(!(n%i))
            while(n % i == 0){prime.pb(i); n/=i;}
    if(n > 1) prime.pb(n);
    return prime;
}

//prime numbers in a range from 0 to n
vector<ll>prime_range(ll n){
    vector<bool>is_prime(n + 1 , true);
    vector<ll>prime;
    is_prime[1] = false;

    for(ll i = 2 ; i * i <= n ; i++)
        if(is_prime[i])
            for(ll j = i * i ; j <= n ; j += i) is_prime[j] = false;

    for(ll i = 2 ; i <= n ; i++) if(is_prime[i]) prime.pb(i);
    return prime;
}

//Big mod operation
ll modulo(ll to_be_divided , ll to_divide){
    string p = to_string(to_be_divided);
    ll ans = 0;

    for(ll i = 0 ; i < p.size() ; i++){
        ans = (ans * 10 + p[i] - '0') % to_divide;
    }

    return ans;
}

// (a ^ b) % mod // complexity log(n)
int power(int a , int b , int mod){
    a %= mod;
    int ans = 1 % mod;

    while(b){
        if(b & 1) ans = 1LL * ans * a % mod;
        a = 1LL * a * a % mod;
        b /= 2;
    }
    return ans;
}

int inverse_mod_of_a_num(int a , int mod){
    return power(a , mod - 2 , mod);
}

ll mulmod(ll a , ll b , ll mod){
    ll ans = 0;
    while(b){
        if(b & 1) ans = (1LL * ans + a) % mod;
        a = (1LL * a + a) % mod;
        b /= 2;
    }
    return ans;
}

int32_t main(){
    ISFAR();
    int n , m;
    cin >> n >> m;
    vector <int> v(n);
    map<int , int> mp;
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    for(int i = 0 ; i < n ; i++){
        if(mp[m - v[i]]){
            cout << i + 1 << " " << mp[m - v[i]] << el;
            return 0;
        }
        mp[v[i]] = i + 1;
    }
    
    cout << "IMPOSSIBLE" << el;

    return 0;
}
