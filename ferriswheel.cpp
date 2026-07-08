#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int i=0;
    int j=n-1;
    int c=0;
    while(i<j){
        if(arr[i]+arr[j]<=x){
            i++;
            j--;
            c++;
        }
        else{
            j--;
            c++;
        }
    }
    if(i==j)
        cout<<++c;
    else
        cout<<c;
}