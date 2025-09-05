#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, k, t;
    cin >> n >> k;

    int qualifying = 0;

    while(n--) {
        cin >> t;
        if(t + k <= 5) qualifying++;
    }

    cout << qualifying / 3 << "\n";

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}