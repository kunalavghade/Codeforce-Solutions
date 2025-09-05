#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];   
    }

    vector<vector<int>> mp(3);
    for(int i = 0; i < n; i++) {
        mp[a[i]-1].push_back(i+1);
    }

    int ans = min({(int)mp[0].size(), (int)mp[1].size(), (int)mp[2].size()});
    cout << ans << "\n";
    for(int i = 0; i < ans; i++) {
        cout << mp[0][i] << " " << mp[1][i] << " " << mp[2][i] << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}