#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        string s;
        cin>>s;
        if(s.size()>10)
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        else
            cout<<s<<"\n";
    }
}