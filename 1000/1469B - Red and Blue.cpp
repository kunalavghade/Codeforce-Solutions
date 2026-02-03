#include "bits/stdc++.h"
using namespace std;



void solve() {
   int n;
    cin >> n;

    long long cur = 0, bestR = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cur += x;
        bestR = max(bestR, cur);
    }

    int m;
    cin >> m;

    cur = 0;
    long long bestB = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cur += x;
        bestB = max(bestB, cur);
    }

    cout << bestR + bestB << "\n";
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