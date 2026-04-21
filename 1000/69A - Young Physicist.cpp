/*

    Author: kunalavghade
    Date: 21-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;
    
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}