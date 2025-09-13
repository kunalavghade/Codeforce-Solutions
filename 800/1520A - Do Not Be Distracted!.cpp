#include "bits/stdc++.h"
using namespace std;


void doNotBeDistracted() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int found = 0;
    found |= (1 << (s[0] - 'a'));

    for(int i = 1; i < n; i++) {
        if(s[i] != s[i-1] && (found & (1 << (s[i] - 'a')))) {
            cout << "NO" << endl;
            return;
        }
        found |= (1 << (s[i] - 'a'));
    }

    cout << "YES" << endl;
}

void solve() {
    int n;
    cin >> n;
    while (n--) {
        doNotBeDistracted();
    }
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}