#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code herex
    int n;
    cin>>n;
    ll arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll count = 1 ;
    for(int i = 0; i<n-1; i++){
        if(arr[i+1]!=arr[i])
            count++;
    }
    cout<<count;
    return 0;
}