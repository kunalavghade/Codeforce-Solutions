#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    while(n--) {
        int ans = 0, t = 0, nums = 3;
        while(nums--) {
            cin >> t;
            ans ^= t;
        }
        cout << ans  << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}