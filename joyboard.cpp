#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n, m, k;
        cin >> n >> m >> k;

        if (k > 3) {
            cout << 0 << '\n';
        } else if (k == 1) {
            cout << 1 << '\n';
        } else if (k == 2) {
            long long ans = min(n, m);
            ans += max(0LL, m / n - 1);
            cout << ans << '\n';
        } else {
            if (m <= n) {
                cout << 0 << '\n';
            } else {
                long long ans = (m - n) - (m / n - 1);
                cout << ans << '\n';
            }
        }
    }

    return 0;
}