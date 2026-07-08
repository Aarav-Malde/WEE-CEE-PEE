#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;
    if (n ==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else if (n==4){
        cout<<"3 1 4 2";
    }
    else{
        for(int i = 1; i<=n; i+=2){
            cout<<i<<" ";
        }
        for(int i = 2; i<=n; i+=2){
            cout<<i<<" ";
        }
    }

    
}