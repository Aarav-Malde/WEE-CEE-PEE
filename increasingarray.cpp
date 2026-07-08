#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a;
    cin>>a;
    ll count = 0;
    ll b[a];
    for (ll i = 0; i<a; i++){
        cin>>b[i];
    }
    for (ll i = 1; i<a; i++){
        if (b[i] < b[i-1]){
            count += b[i-1] - b[i];
            b[i] = b[i-1];
        }

    }

    cout << count << "\n";
}