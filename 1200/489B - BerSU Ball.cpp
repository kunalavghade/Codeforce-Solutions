/*

    Author: kunalavghade
    Date: 23-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(b.begin(), b.end());
    int m;
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++) cin >> g[i];
    sort(g.begin(), g.end());

    int i = 0, j = 0;
    int ans = 0;
    while (i < n && j < m) {
        if (abs(b[i] - g[j]) <= 1) {
            ans++;
            i++;
            j++;
        } else if (b[i] < g[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout<< ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

