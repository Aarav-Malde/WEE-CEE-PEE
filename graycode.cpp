#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n; 
    for (int i = 0; i < (1 << n); i++) {
        int g = i ^ (i >> 1);
        cout << bitset<16>(g).to_string().substr(16 - n) << '\n';
}
    
}