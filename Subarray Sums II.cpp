//Problem link: https://vjudge.net/problem/cses-1661

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , m;
    cin >> n >> m;
    vector<ll>v(n) , pref(n + 1 , 0);
    map<ll , ll>mp;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    ll cnt = 0;
    for(int i = 0 ; i <= n ; i++){
        cnt += mp[pref[i] - m];
        mp[pref[i]]++;
    }

    cout << cnt << endl;
}