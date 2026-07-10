#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int> pq;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        // Store for later by reading into array? Simpler:
    }

    cin.clear();
    cin.seekg(0);

    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    for (int i = n - 1; i >= 0; i--) {
        pq.push(p[i]);
        int mx = pq.top();
        pq.pop();

        ans += 1LL * (mx - p[i]);

        pq.push(p[i]);
    }

    cout << ans << '\n';
    return 0;
}