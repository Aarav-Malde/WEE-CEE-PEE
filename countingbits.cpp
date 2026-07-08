#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    ll count=0;
    for(ll i=1; i<=n; i++){
        ll dup =i;
        while(dup>0){
            if(dup%2==1)
                count++;
            dup/=2;
        }
    }
    cout<<count;
    return 0;
}