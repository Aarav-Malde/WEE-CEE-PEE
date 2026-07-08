#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code.
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i =0; i<n; i++)
        cin>>arr[i];
    ll currSum=arr[0];
    ll maxSum=arr[0];
    for(int i=1; i<n; i++){
        currSum= max(currSum+arr[i], arr[i]);
        maxSum= max(currSum, maxSum);
    }
    cout<<maxSum;
    return 0;
}
