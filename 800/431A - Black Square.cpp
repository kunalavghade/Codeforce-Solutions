#include "bits/stdc++.h"
using namespace std;


void solve() {
    int val[4];
    for(int i = 0; i < 4; i++) {
        cin >> val[i];
    }

    int ans = 0;
    string s;
    cin >> s;

    for(char c: s)
        ans += val[c - '1'];

    cout << ans << "\n";


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}