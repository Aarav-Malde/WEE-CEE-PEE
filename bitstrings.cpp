#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    ll no = 1;
    cin>>n;
    for(ll i = 1; i<=n; i++){
        no = 2 * no%1000000007;
    }
    //ll mod = (pow(10,9) + 7);
    cout<<(no);
}