#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    ll len = s.size();
    vector<int> freq(25);
    for(char c : s){
        freq[c-'A']++;
    }
    int max = *max_element(freq.begin(), freq.end());
    if(max>len/2+1){
        cout<<"-1";
    }
    else{
        
    }

    
}