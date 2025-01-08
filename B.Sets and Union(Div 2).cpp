//Problem Link : https://codeforces.com/problemset/problem/1669/E

//char *p; p=strstr(x , "any_string to find");
//*max_element(vect.begin() , vect.end())

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair


int32_t main(){
    ISFAR();
    ll l;
    cin>>l;
    while(l--){
        ll n;
        cin>>n;
        vector<ll>v(n + 1);
        for(ll i = 1 ; i <= n ; i++){
            ll x;
            cin>>x;
            v[i] = x;
        }

        ll m;
        cin>>m;

        for(ll i = 1 ; i <= m ; i++){
            ll x , y;
            cin>>x>>y;
            vector<ll>tt;
            ll k = v[x];

            for(ll i = 1 ; i < x ; i++) tt.pb(-2);

            for(ll j = x ; j <= n ; j++){
                k = k & v[j];
                tt.pb(k);
            }

            sort(tt.begin() , tt.end());

            auto p = upper_bound(tt.begin() , tt.end() , y);
            ll s = 0;

            if(p != tt.end()) s = 0;
            else{
                s = distance(tt.begin(), p) - 1;
                s = n - s;
            }


            if(s) cout<<s<<" ";
            else cout<<-1<<endl;
        }
        cout<<endl;
    }
    return 0;
}
