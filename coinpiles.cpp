#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;

    for(ll i = 0; i < t; i++) {
    ll x, y;
    cin>>x>>y;
    if((x+y)%3 !=0 || y > 2*(x+y)/3 || x > 2*(x+y)/3){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
    }
}