#include "bits/stdc++.h"
using namespace std;


int getans(int n) {
    if(n <= 1) return n;
    int c = 0;
    for(int i = 0; i < 32; i++) {
        int cur = 1 << i;
        if(cur <= n) c = cur;
        else break;
    }
    return 1 + getans(n - c);
}

void solve() {
    int n;
    cin >> n;
    cout << getans(n) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}