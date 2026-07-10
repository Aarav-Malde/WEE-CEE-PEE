#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int half = abs(a - b);
        int n = 2 * half;

        if (half == 0 || max({a, b, c}) > n) {
            cout << -1 << '\n';
            continue;
        }

        if (c <= half)
            cout << c + half << '\n';
        else
            cout << c - half << '\n';
    }

    return 0;
}