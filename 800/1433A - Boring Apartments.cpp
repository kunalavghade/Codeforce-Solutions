#include "bits/stdc++.h"
using namespace std;

int fact(int n) {
    return (n==1 || n==0) ? 1 : n + fact(n - 1);
}

void solve() {
    int n, x;
    cin >> n;
    while(n--) {
        cin >> x;
        int digits = 0, n = 0;
        while(x) {
            n = x % 10;
            x /= 10;
            digits++;
        }
        cout << fact(digits) + (n-1) * fact(4) << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}