#include "bits/stdc++.h"
using namespace std;



int solve() {
    int x;
    cin >> x;

    bool possible = false;
    for (int i = 0; i <= 10; i++) {
        int remaining = x - (i * 111);
        
        if (remaining >= 0 && remaining % 11 == 0) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}