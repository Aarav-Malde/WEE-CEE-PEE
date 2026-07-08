#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    ll b[m];
    ll c=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
  
    sort(b,b+m);
    sort(a,a+n);

    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(a[i]>b[j]+k)
            j++;
        else if(a[i]<b[j]-k)
            i++;
        else{
            c++;
            i++;
            j++;
        }
    }    
    cout<<c;
}