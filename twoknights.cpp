#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k;
    cin>>k;
    vector<ll> arr(k + 10, 0);
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 8;
    arr[4] = 24;
    for(ll i = 4; i<k+9; i++){
        arr[i] = arr[i-1] + 24 + 8*(i-5);
    }
    for(ll i = 1; i<=k; i++){
        cout<< i*i*(i*i-1)/2- arr[i]<<"\n";
    }
}