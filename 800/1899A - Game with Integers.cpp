#include "bits/stdc++.h"
using namespace std;

void solveIsDiv3() {
    int t;
    cin >> t;
    for(int i = 0; i < 1; i++) {
        if(((t + i) % 3 == 0) || ((t - i) % 3 == 0)) {
            cout << "Second" << "\n";
            return; 
        }
    }
    cout << "First" << "\n";
}

void solve() {
    int n;
    cin >> n;
    while(n--) {
        solveIsDiv3();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}