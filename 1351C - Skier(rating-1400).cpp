#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair

void solve(){
    map<pair<pair<ll , ll> , pair<ll , ll>> , ll>mapp;
    string p;
    cin>>p;
    ll ans=0;
    ll x = 0 , y = 0;

    for(ll i = 0 ; i < p.length() ; i++){
        ll dx = x , dy = y;

        if(p[i] == 'N') x++;
        else if(p[i] == 'S') x--;
        else if(p[i] == 'E') y++;
        else if(p[i] == 'W') y--;

        if(mapp[{{dx , dy} , {x , y}}] == 1) ans += 1;
        else{
            ans+=5;
            mapp[{{dx , dy} , {x , y}}] = 1;
            mapp[{{x , y} , {dx , dy}}] = 1;
        }
        //cout<<mapp[{{x , y} , {dx , dy}}]<<" ";
    }
    cout<<ans<<endl;
}

int main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}