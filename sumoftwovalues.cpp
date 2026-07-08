#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i].first;
        vec[i].second = i+1;
    }
    sort(vec.begin(), vec.end());
    int i = 0;
    int j = n-1;
    int ans=0;
    while(i<j){
        if(vec[i].first+vec[j].first==x){
            cout<<vec[i].second<<" "<<vec[j].second;
            ans++;
            break;
        }
        else if(vec[i].first+vec[j].first >x){
            j--;
        }
        else if(vec[i].first+vec[j].first<x){
            i++;
        }
    }
    if(ans==0)
        cout<<"IMPOSSIBLE";

}