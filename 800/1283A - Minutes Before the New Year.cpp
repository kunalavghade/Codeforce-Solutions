#include "bits/stdc++.h"
using namespace std;

void minBeforeNewYear() {
    int h, m;
    cin >> h >> m;
    int ans = (24 * 60) - (h * 60 + m);
    cout << ans << "\n";
}

void solve() {
    int n;
    cin >> n;
    while (n--)
        minBeforeNewYear();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}