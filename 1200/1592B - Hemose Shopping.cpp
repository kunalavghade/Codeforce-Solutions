#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<long long> a(n), b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (x <= 1) {
        cout << "YES\n";
        return;
    }

    b = a;
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (i + x >= n && i - x < 0) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
