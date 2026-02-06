#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    long long total_sum = 0;
    for (int i = 0; i < n - 1; i++) 
        total_sum += abs(a[i] - a[i+1]);

    long long min_sum = total_sum - abs(a[0] - a[1]);

    min_sum = min(min_sum, total_sum - abs(a[n-2] - a[n-1]));

    for (int i = 1; i < n - 1; i++) {
        long long current_reduction = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
        long long new_bridge = abs(a[i-1] - a[i+1]);
        long long current_sum = total_sum - current_reduction + new_bridge;
        min_sum = min(min_sum, current_sum);
    }

    cout << min_sum << endl;
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