#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin >>n;

    ll a[n-1];
    ll sum = 0;
    for(int i = 1; i<=(n-1); i++){
        cin >> a[i-1];
        sum+=a[i-1];
    }
    cout << (n*(n+1))/2 - sum << "\n";
}