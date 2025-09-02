#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    
    int ans = 0;
    for(auto x: a)
        ans += (mx - x);

    cout << ans << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}