/*

    Author: kunalavghade
    Date: 29-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_dots = 0;
    bool three_in_a_row = false;
    int consecutive_dots = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            total_dots++;
            consecutive_dots++;
            if (consecutive_dots >= 3) {
                three_in_a_row = true;
            }
        } else {
            consecutive_dots = 0;
        }
    }

    if (three_in_a_row) {
        cout << 2 << endl;
    } else {
        cout << total_dots << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}

