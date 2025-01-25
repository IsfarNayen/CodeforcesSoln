//Problem link: https://cses.fi/problemset/task/1662

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    vector<int>v(n) , pref(n + 1 , 0);
    map<ll , ll>mp;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
        pref[i + 1] %= n;
        pref[i + 1] += n;
        pref[i + 1] %= n;
    }

    ll cnt = 0;
    for(int i = 0 ; i <= n ; i++){
        cnt += mp[pref[i]];
        mp[pref[i]]++;
    }

    cout << cnt << endl;
}