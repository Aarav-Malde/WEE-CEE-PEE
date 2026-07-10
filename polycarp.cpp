#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long b[7];
        for (int i = 0; i < 7; i++)
            cin >> b[i];

        cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << "\n";
    }

    return 0;
}