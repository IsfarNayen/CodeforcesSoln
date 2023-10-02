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
    ll n;
    string x , y , z , p;
    cin>>x;
    n = x.size();
    vector<ll>v;

    ll A1 = 0 , cnt = 0 , mn = INT_MAX;
    bool flag1 = false , flag2 = false;

    for(ll i = 0 ; i <= n ; i++){
        if(x[i] == 'A') A1++;

        else if(x[i] == 'B' || i == n){
            cnt += A1;
            v.pb(A1);
            mn = min(A1 , mn);
            A1 = 0;
        }

        if(x[i] == 'B') flag1 = true;
        if(x[i] == 'B' && x[i + 1] == 'B') flag2 = true;
    }

    if(flag1 && flag2) cout<<cnt<<endl;
    else if(flag1) cout<<cnt - mn<<endl;
    else cout<<0<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
