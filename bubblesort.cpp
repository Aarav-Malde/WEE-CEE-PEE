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
    int arr[10]={9,2,4,6,7,3,1,5,8,0};
    for(int i=0; i<10; i++){
        for(int j = 0; j<10; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(int i = 0; i<10; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}