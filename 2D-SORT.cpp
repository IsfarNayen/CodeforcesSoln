//Problem Link: https://www.spoj.com/problems/SORT2D/en/

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define el '\n'


bool ok(pair<int , int> a , pair<int , int> b){
    if(a.first == b.first) return b.second <= a.second; // if returns value true, it won't swap
    else return a < b; // if returns value false, it will swap
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int , int>>v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i].first >> v[i].second;
    
    sort(v.begin() , v.end() , ok);

    for(auto x : v) cout << x.first << " " << x.second << el;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
