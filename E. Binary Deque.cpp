//Problem Link : https://codeforces.com/contest/1692/problem/E

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
    ll n , m;
    cin>>n>>m;
    ll sum = 0;
    vector<ll> pre(n + 1);
    pre[0] = 0;
    for(ll i = 1 ; i <= n ; i++){
        ll x;
        cin>>x;
        sum += x;
        pre[i] = sum;
    }

    if(sum < m){
        cout<<-1<<endl;
        return;
    }
    if(sum == m){
        cout<<0<<endl;
        return;
    }

    ll mx = 0 , len = 0;


    for(ll i = 0 , j = 0 ; j <= n && i <= n - m;){
        ll t = pre[j] - pre[i];

        if(t == m){
            len = j - i;
            mx = max(mx , len);
        }
        if(t <= m) j++;
        else i++;
    }

    cout<<n - mx<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
