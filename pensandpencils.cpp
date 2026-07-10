#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int pens = (a + c - 1) / c;
        int pencils = (b + d - 1) / d;

        if (pens + pencils > k)
            cout << -1 << '\n';
        else
            cout << pens << " " << pencils << '\n';
    }

    return 0;
}