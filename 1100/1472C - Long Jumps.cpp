#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }


    vector<long long> dp(n + 1, 0);
    long long max_score = 0;


    for (int i = n; i >= 1; i--) {
        long long next_pos = i + a[i];
        if (next_pos > n)  dp[i] = a[i];
        else dp[i] = a[i] + dp[next_pos];
        max_score = max(max_score, dp[i]);
    }

    cout << max_score << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}