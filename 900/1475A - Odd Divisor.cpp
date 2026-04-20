/*

    Author: kunalavghade
    Date: 20-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // Check if n is NOT a power of two
    if (n & (n - 1)) {
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