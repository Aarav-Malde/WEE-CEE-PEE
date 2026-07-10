#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll pref = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            pref += x;

            if (pref < 0) {
                ans += -pref;
                pref = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}