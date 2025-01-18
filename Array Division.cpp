//Problem Link : https://cses.fi/problemset/task/1085
//Problem: Array Division

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define el '\n'


bool ok(ll mid , vector<int>v , int tar){
    for(int i = 0 ; i < v.size() ; i++) if(v[i] > mid) return false;
    
    int cnt = 1;
    ll sum = 0;

    for(int i = 0 ; i < v.size() ; i++){
        if(sum + v[i] > mid){
            sum = v[i];
            cnt++;
        }
        else sum += v[i];
    }

    return cnt <= tar;
}

int32_t main(){
    ISFAR();
    int n , m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    
    ll l = 0 , r = 1e18 + 1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(ok(mid , v , m)) r = mid - 1;
        else l = mid + 1;
    }
    cout << l << el;

    return 0;
}
