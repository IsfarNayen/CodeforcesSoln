//Problem Link : https://codeforces.com/problemset/problem/1669/G

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
    char v[n + 3][m + 3] = {0};

    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= m ; j++){
            char x;
            cin>>x;
            v[i][j] = x;
        }
    }

    for(ll j = 1 ; j <= m ; j++){
        ll cnt1 = 0 , cnt2 = 0;

        for(ll i = 1 ; i <= n + 1; i++){

            if(v[i][j] == '*') cnt1++;

            else if(v[i][j] == 'o'){
                for(ll k = i - 1 ; k >= 1 && v[k][j] != 'o' ; k--){
                    if(cnt1 > 0){
                        v[k][j] = '*';
                        cnt1--;
                    }
                    else{
                        v[k][j] = '.';
                    }
                }
            }

            else if(i == n + 1 && v[i - 1][j] != 'o'){
                for(ll k = i - 1 ; k >= 1 && v[k][j] != 'o' ; k--){
                    if(cnt1 > 0){
                        v[k][j] = '*';
                        cnt1--;
                    }
                    else{
                        v[k][j] = '.';
                    }
                }
            }
        }
    }

    cout<<endl;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= m ; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
