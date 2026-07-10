#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        b = a;
        sort(b.begin(), b.end());

        vector<array<int, 3>> ans;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i])
                continue;

            int pos = i;
            while (a[pos] != b[i])
                pos++;

            ans.push_back({i + 1, pos + 1, pos - i});

            rotate(a.begin() + i, a.begin() + pos, a.begin() + pos + 1);
        }

        cout << ans.size() << '\n';
        for (auto x : ans)
            cout << x[0] << " " << x[1] << " " << x[2] << '\n';
    }

    return 0;
}