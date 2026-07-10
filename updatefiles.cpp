#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        if (k == 1) {
            cout << n - 1 << '\n';
            continue;
        }

        ll have = 1;
        ll ans = 0;

        while (have < k && have < n) {
            have *= 2;
            ans++;
        }

        if (have < n) {
            ll left = n - have;
            ans += (left + k - 1) / k;
        }

        cout << ans << '\n';
    }

    return 0;
}