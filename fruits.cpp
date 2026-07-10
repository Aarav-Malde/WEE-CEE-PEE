#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> price(n);
    for (int i = 0; i < n; i++)
        cin >> price[i];

    map<string, int> mp;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }

    vector<int> freq;
    for (auto &x : mp)
        freq.push_back(x.second);

    sort(freq.begin(), freq.end());
    sort(price.begin(), price.end());

    int sz = freq.size();

    long long mn = 0, mx = 0;

    for (int i = 0; i < sz; i++) {
        mn += 1LL * freq[sz - 1 - i] * price[i];
        mx += 1LL * freq[sz - 1 - i] * price[n - 1 - i];
    }

    cout << mn << " " << mx << '\n';

    return 0;
}