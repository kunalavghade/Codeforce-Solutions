#include "bits/stdc++.h"
using namespace std;

bool isPresent[26];

void solve() {
    int n;
    cin >> n;
    vector<int> a(3);
    while(n--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(begin(a), end(a));
        cout << a[1] << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}