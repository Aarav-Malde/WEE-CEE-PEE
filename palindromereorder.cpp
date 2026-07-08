#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    int len = s.size();

    vector<int> freq(26,0); // initializes a vector with integer entries, length 26, all 0
    for(char c : s){
        freq[c-'A']++; //works as all entries in the input is caps only, warna even if not caps, bas do alag vectors banana padta for cap and smol
    }
    int oddIndex=0;
    string leftPart="";
    string middlePart="";
    string rightPart="";
    //now ur vector is ready
    for(int i = 0; i<26; i++){
        if(freq[i]%2!=0){
            oddIndex++;
            middlePart+=string(freq[i], char(65+i));
        }
        else{
            leftPart+=string(freq[i]/2, char(65+i));
            rightPart=string(freq[i]/2, char(65+i))+rightPart;
        }     

    }
    if((oddIndex>0 && len%2==0)||(len%2!=0 && oddIndex>1)){
        cout<<"NO SOLUTION";
    }
    else{
        cout<<leftPart+middlePart+rightPart;
    }
}