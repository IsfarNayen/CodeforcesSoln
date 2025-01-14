//Problem Link : https://codeforces.com/problemset/problem/940/C

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define el '\n'


int32_t main(){
    ISFAR();
    ll n , m;
    cin >> n >> m;
    string s; cin >> s;
    
    set<char>st; for(ll i = 0 ; i < s.size() ; i++) st.insert(s[i]);
    char mn = *st.begin();

    if(m <= n){
        for(int i = m - 1 ; i >= 0 ; i--){
            auto it = upper_bound(st.begin() , st.end() , s[i]);   
            if(it != st.end()){
                s[i] = *it;
                for(int j = 0 ; j <= i ; j++) cout << s[j];
                for(int j = i + 1 ; j < m ; j++) cout << mn;
                return 0;
            }
        }
    }
    else{
        cout << s;
        for(int i = s.size() ; i < m ; i++) cout << mn;
    }
    return 0;
}