#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int a = 1; a <= n; a++) {
        vector<bool> visited(n + 1, false);
        int cur = a;

        while (!visited[cur]) {
            visited[cur] = true;
            cur = p[cur];
        }

        cout << cur << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
