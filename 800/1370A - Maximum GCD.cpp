#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n, x;
    cin >> n;
    while(n--) {
        cin >> x;
        if(x <= 3) cout << "1\n";
        else cout << (x / 2) << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}