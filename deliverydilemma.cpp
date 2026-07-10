#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<ll,ll>> v;
        for (int i = 0; i < n; i++)
            v.push_back({a[i], b[i]});

        sort(v.begin(), v.end());

        vector<ll> suf(n + 1, 0);

        for (int i = n - 1; i >= 0; i--)
            suf[i] = suf[i + 1] + v[i].second;

        ll ans = suf[0];

        for (int i = 0; i < n; i++)
            ans = min(ans, max(v[i].first, suf[i + 1]));

        cout << ans << '\n';
    }

    return 0;
}