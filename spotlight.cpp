#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vector<vector<bool>> L(n, vector<bool>(m));
    vector<vector<bool>> R(n, vector<bool>(m));
    vector<vector<bool>> U(n, vector<bool>(m));
    vector<vector<bool>> D(n, vector<bool>(m));

    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < m; j++) {
            L[i][j] = seen;
            if (a[i][j]) seen = true;
        }

        seen = false;
        for (int j = m - 1; j >= 0; j--) {
            R[i][j] = seen;
            if (a[i][j]) seen = true;
        }
    }

    for (int j = 0; j < m; j++) {
        bool seen = false;
        for (int i = 0; i < n; i++) {
            U[i][j] = seen;
            if (a[i][j]) seen = true;
        }

        seen = false;
        for (int i = n - 1; i >= 0; i--) {
            D[i][j] = seen;
            if (a[i][j]) seen = true;
        }
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                ans += L[i][j];
                ans += R[i][j];
                ans += U[i][j];
                ans += D[i][j];
            }
        }
    }

    cout << ans << '\n';
    return 0;
}