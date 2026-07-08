#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string sr="";
        string sl="";
        int n;
        cin>>n;
        if(n==1 || n==3)
            cout<<"-1"<<"\n";
        else if(n==2)
            cout<<"66"<<"\n";
        else if(n%2==0){
            for(int k = 0; k<(n/2) -1; k++){
                sr+="3";
                sl+="3";
            }
            cout<<sr+sl+"66"<<"\n";
        }
        else{
            for(int k = 0; k<n-5; k++){
                sr+="3";
            }
            cout<<sr+"36366"<<"\n";
        }
    }
}