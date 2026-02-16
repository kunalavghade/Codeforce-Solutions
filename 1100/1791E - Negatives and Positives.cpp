#include "bits/stdc++.h"
using namespace std;


const long long INF = 1e18;

long long solve(vector<long long> &a, vector<vector<long long>> &dp, int n, bool flag) {
    if (n == 0) return flag ? -a[0] : a[0];
    if (dp[n][flag] != -INF) return dp[n][flag];

    long long c = flag ? -a[n] : a[n];

    dp[n][flag] = c + solve(a, dp, n-1, 0);

    dp[n][flag] = max(dp[n][flag], -c + solve(a, dp, n-1, 1));
    
    return dp[n][flag];
}

int solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<long long>> dp(n, vector<long long>(2, -INF));

    cout << solve(a, dp, n-1, 0) << endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}