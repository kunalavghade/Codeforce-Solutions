#include "bits/stdc++.h"
using namespace std;

const int NEG = -1e9;

int solve(int n, int a, int b, int c, vector<int>& dp) {
  if(n == 0) return 0;
  if(n < 0) return NEG;
  if(dp[n] != NEG) return dp[n];

  dp[n]= max(dp[n], 1 + solve(n - a, a, b, c, dp));
  dp[n]= max(dp[n], 1 + solve(n - b, a, b, c, dp));
  dp[n]= max(dp[n], 1 + solve(n - c, a, b, c, dp));

  return dp[n];
}

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1, NEG);
    cout << solve(n, a, b, c, dp) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}