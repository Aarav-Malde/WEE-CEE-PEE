#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll q;
    cin>>q;

    for(ll i = 0; i<q; i++){
        ll n;
        ll count = 1;
        ll len = 1;
        ll start = 1;
        cin>>n;
        while(n>9*len*count){ // to prevent overflow
            n-=9*len*count;
            len++;
            count*=10;
            start*=10;
        }
        ll number = start +(n-1)/len;
        char digit = to_string(number)[(n-1)%len];
        cout<<digit<<"\n";
    }
}