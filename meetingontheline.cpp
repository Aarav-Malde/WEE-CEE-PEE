#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    cout << fixed << setprecision(10);

    while (T--) {
        int n;
        cin >> n;

        vector<double> x(n), t(n);

        double L = 1e18, R = -1e18;

        for (int i = 0; i < n; i++) {
            cin >> x[i];
            L = min(L, x[i]);
            R = max(R, x[i]);
        }

        for (int i = 0; i < n; i++)
            cin >> t[i];

        auto f = [&](double p) {
            double res = 0;
            for (int i = 0; i < n; i++)
                res = max(res, t[i] + fabs(x[i] - p));
            return res;
        };

        for (int it = 0; it < 100; it++) {
            double m1 = L + (R - L) / 3.0;
            double m2 = R - (R - L) / 3.0;

            if (f(m1) > f(m2))
                L = m1;
            else
                R = m2;
        }

        cout << (L + R) / 2.0 << "\n";
    }

    return 0;
}