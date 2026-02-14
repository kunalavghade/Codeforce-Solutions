#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

long long solve(vector<long long> &points, int i, vector<long long> &dp) {
    if(i < 0) return 0;
    if(dp[i] != -1) return dp[i];

    long long skip = solve(points, i - 1, dp);
    long long take = solve(points, i - 2, dp) + points[i];

    return dp[i] = max(skip, take);
}

void solve() {
    int n;
    cin >> n;

    vector<long long> freq(MAX + 1, 0);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<long long> points(MAX + 1, 0);
    for(int i = 1; i <= MAX; i++)
        points[i] = freq[i] * i;

    vector<long long> dp(MAX + 1, -1);

    cout << solve(points, MAX, dp);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
