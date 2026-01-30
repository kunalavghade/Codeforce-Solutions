#include "bits/stdc++.h"
using namespace std;

void solve() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    int S = p1 + p2 + p3;
    if (S & 1)
        cout << -1 << '\n';
    else
        cout << min(S / 2, p1 + p2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}