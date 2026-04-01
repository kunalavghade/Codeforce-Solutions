/*

    Author: kunalavghade
    Date: 30-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    long long b, c, d;
    if (!(cin >> b >> c >> d)) return;

    long long a = 0;
    bool possible = true;

    for (int i = 0; i < 62; ++i) {
        int bi = (b >> i) & 1;
        int ci = (c >> i) & 1;
        int di = (d >> i) & 1;

        bool found = false;
        // Try setting a_i to 0 or 1
        for (int ai : {0, 1}) {
            if ((ai | bi) - (ai & ci) == di) {
                if (ai) a |= (1LL << i);
                found = true;
                break;
            }
        }

        if (!found) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << a << "\n";
    } else {
        cout << "-1\n";
    }
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