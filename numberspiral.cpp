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
    cin >> x >> y;
    if(x>=y){
        if(x%2==0)
            cout<<(x*x - y + 1)<<"\n";
        else
            cout<<(x*x - x + 1 - x + y)<<"\n";
    }
    else{
        if(y%2==1)
            cout<<(y*y - x + 1)<<"\n";
        else
            cout<<(y*y - y + 1 - y + x)<<"\n";
    }
}
}