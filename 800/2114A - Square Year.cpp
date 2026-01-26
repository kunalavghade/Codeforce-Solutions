#include "bits/stdc++.h"
using namespace std;

int solve() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int Y = stoi(s);

        int l = 0, h = 100;   // because 100^2 = 10000 (max 4-digit year)
        int x = -1;

        while (l <= h) {
            int m = l + (h - l) / 2;
            long long sq = 1LL * m * m;

            if (sq == Y) {
                x = m;
                break;
            } else if (sq < Y) {
                l = m + 1;
            } else {
                h = m - 1;
            }
        }

        if (x == -1)
            cout << -1 << "\n";
        else
            cout << 0 << " " << x << "\n";
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    // cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}
