#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        long long x = 0, y = 0;
        long long place = 1;
        bool turn = false;

        while (n) {
            int d = n % 10;

            if (d % 2 == 0) {
                x += (d / 2) * place;
                y += (d / 2) * place;
            } else {
                if (!turn) {
                    x += (d / 2 + 1) * place;
                    y += (d / 2) * place;
                } else {
                    x += (d / 2) * place;
                    y += (d / 2 + 1) * place;
                }
                turn = !turn;
            }

            place *= 10;
            n /= 10;
        }

        cout << x << " " << y << "\n";
    }

    return 0;
}