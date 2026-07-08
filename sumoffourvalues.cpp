#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    int i,j,k,l;
    
    sort(arr.begin(), arr.end());
    int sum =0;
    for(l=0; l<n-3; l++){
        for(i=l+1; i<n-2; i++){
        j = i+1;
        k = n-1;
        while(j<k){
            sum = arr[i].first + arr[j].first + arr[k].first + arr[l].first;
            if(sum==x){
                break;
            }
            else if(sum<x)
                j++;
            else
                k--;
        }
        if(sum ==x)
            break;
    }
        if(sum==x)
            break;
    }
    
    if(sum==x)
        cout<<arr[i].second +1<<" "<<arr[j].second+1<<" "<<arr[k].second+1<<" "<<arr[l].second+1;
    else    
        cout<<"IMPOSSIBLE";

}