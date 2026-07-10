#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<long long> cnt(n + 1, 0);

        for (int i = 0; i < m; i++) {
            int p;
            cin >> p;
            cnt[p]++;
        }

        for (int i = n - 1; i >= 1; i--)
            cnt[i] += cnt[i + 1];

        vector<long long> ans(26, 0);

        for (int i = 0; i < n; i++)
            ans[s[i] - 'a'] += 1 + cnt[i + 1];

        for (int i = 0; i < 26; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }

    return 0;
}