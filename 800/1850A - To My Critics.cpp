#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n;
    cin >> n;

    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if(((a+b) >= 10) || ((a+c) >= 10) || ((b+c) >= 10)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}