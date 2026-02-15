#include "bits/stdc++.h"
using namespace std;



int solve() {
    string s;
    cin >> s;

    size_t pos = s.find("AB");
    if (pos != string::npos) {
        if (s.find("BA", pos + 2) != string::npos) {
            cout << "YES";
            return 0;
        }
    }

    pos = s.find("BA");
    if (pos != string::npos) {
        if (s.find("AB", pos + 2) != string::npos) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}