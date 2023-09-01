//char *p; p=strstr(x , "any_string to find");
//*max_element(vect.begin() , vect.end())

#include<bits/stdc++.h>
using namespace std;
#define ISFAR() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair

void solve(){
    string x , f;
    cin>>x;
    ll n = x.size();

    if(is_sorted(x.begin() , x.end())){
        cout<<x<<endl;
        return;
    }

    char lst = x[x.size() - 1];
    f += lst;

    for(ll i = n - 2 ; i >= 0 ; i--){
        if(x[i] <= lst){
            f += x[i];
            lst = x[i];
        }
        else{
            x[i] += 1;
            f += min(x[i] , '9');
        }
    }
    sort(f.begin() , f.end());

    cout<<f<<endl;
}

int32_t main(){
    ISFAR();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}
