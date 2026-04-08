/*

    Author: kunalavghade
    Date: 08-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
   // Find the position of the highest set bit
    int msb = 0;
    for (int i = 30; i >= 0; i--) {
        if ((n >> i) & 1) {
            msb = i;
            break;
        }
    }
    
    // The answer is (2^msb) - 1
    cout << (1 << msb) - 1 << "\n";

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