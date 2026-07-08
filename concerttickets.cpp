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
    int n,m;
    cin>>n>>m;
    vector<int> tix(n), cust(m);
    
    for(int i=0; i<n; i++)
        cin>>tix[i];
    for(int i=0; i<m; i++)
        cin>>cust[i];

    sort(tix.begin(), tix.end());
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(cust[j]<tix[i]){
            cout<<"-1"<<"\n";
        }
        


    return 0;
}