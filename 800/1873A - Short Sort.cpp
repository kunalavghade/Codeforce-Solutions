#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;

    while(n--) {
        cin >> s;
        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}