#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long sx, sy;
    cin >> n >> sx >> sy;

    int left = 0, right = 0, up = 0, down = 0;

    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;

        if (x > sx) right++;
        if (x < sx) left++;
        if (y > sy) up++;
        if (y < sy) down++;
    }

    int best = right;
    long long px = sx + 1, py = sy;

    if (left > best) {
        best = left;
        px = sx - 1;
        py = sy;
    }

    if (up > best) {
        best = up;
        px = sx;
        py = sy + 1;
    }

    if (down > best) {
        best = down;
        px = sx;
        py = sy - 1;
    }

    cout << best << '\n';
    cout << px << ' ' << py << '\n';

    return 0;
}