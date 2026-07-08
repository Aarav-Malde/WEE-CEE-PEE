#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    if(n%4 == 2 || n%4 == 1)
        cout<<"NO"<<"\n";
    else if(n%4 == 0){
        cout<<"YES"<<"\n"<<n/2<<"\n";
        for(ll i = 1; i<=n; i++){
            if(i%4 ==0 || i%4==1){
                cout<<i<<" ";
            }
        }
        cout<<"\n"<<n/2<<"\n";
        for(ll i = 1; i<=n; i++){
            if(i%4 ==2 || i%4==3){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"YES"<<"\n"<<n/2 + 1<<"\n"<<"1 2 ";
        for(ll i = 4; i<=n; i++){
            if(i%4 ==0 || i%4==3){
                cout<<i<<" ";
            }
        }
        cout<<"\n"<<n/2<<"\n"<<"3 ";
        for(ll i = 4; i<=n; i++){
            if(i%4 ==1 || i%4==2){
                cout<<i<<" ";
            }
        }
    }
}