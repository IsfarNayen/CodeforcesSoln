//Problem Link : https://codeforces.com/contest/632/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define el '\n'

bool ok(string a , string b){
    return a + b < b + a;
}

int32_t main(){
    ISFAR();
    int n;
    cin >> n;
    vector<string>v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(v.begin() , v.end() , ok);

    for(auto x : v) cout << x;

    return 0;
}
