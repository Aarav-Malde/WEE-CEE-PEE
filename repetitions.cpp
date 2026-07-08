#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    ll count = 1;
    ll max = 1;
    ll n = s.size();
    for (ll i = 0; i<n-1; i++){
        if (s[i] == s[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(max < count){
            max = count;
        }
    }
    cout << max << "\n";
}