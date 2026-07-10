#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    unordered_map<ll, pair<int,int>> mp;

    for (int i = 1; i <= k; i++) {
        int n;
        cin >> n;

        vector<ll> a(n);
        ll sum = 0;

        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }

        for (int j = 0; j < n; j++) {
            ll rem = sum - a[j];

            if (mp.count(rem) && mp[rem].first != i) {
                cout << "YES\n";
                cout << mp[rem].first << " " << mp[rem].second << "\n";
                cout << i << " " << j + 1 << "\n";
                return 0;
            }

            if (!mp.count(rem))
                mp[rem] = {i, j + 1};
        }
    }

    cout << "NO\n";
    return 0;
}
