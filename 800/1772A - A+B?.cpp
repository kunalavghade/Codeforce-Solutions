#include "bits/stdc++.h"
using namespace std;

void aPlusB( ){
    string s;
    cin >> s;
    cout << s[0] + s[2] - '0' * 2 << "\n";
}

void solve() {
    int n;
    cin >> n;
    while (n--) {
        aPlusB();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}