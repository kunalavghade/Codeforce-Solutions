/*

    Author: kunalavghade
    Date: 18-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int res1 = a + b + c;
    int res2 = a * b * c;
    int res3 = a + (b * c);
    int res4 = (a * b) + c;
    int res5 = (a + b) * c;
    int res6 = a * (b + c);

    int ans = max({res1, res2, res3, res4, res5, res6});

    cout << ans << endl;

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