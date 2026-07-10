#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int mx = 0;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
        }

        cout << 2LL * (n - mx) - k + 1 << '\n';
    }

    return 0;
}