#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        cout << "First\n";
    } else if (a < b) {
        cout << "Second\n";
    } else {
        // a == b
        if (c % 2 == 1) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}
