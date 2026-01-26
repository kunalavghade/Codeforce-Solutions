#include "bits/stdc++.h"
using namespace std;



int solve() {
    int n, k;
    cin >> n >> k;

    return n -1  <= k ? 1 : n   ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        cout<<ans <<endl;
    }

    return 0;
}
